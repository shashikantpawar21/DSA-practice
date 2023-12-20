// You are given an integer array bloomDay, an integer m and an integer k.

// You want to make m bouquets. To make a bouquet, you need to use k adjacent flowers from the garden.

// The garden consists of n flowers, the ith flower will bloom in the bloomDay[i] and then can be used in exactly one bouquet.

// Return the minimum number of days you need to wait to be able to make m bouquets from the garden. If it is impossible to make m bouquets return -1.

 

// Example 1:

// Input: bloomDay = [1,10,3,10,2], m = 3, k = 1
// Output: 3
// Explanation: Let us see what happened in the first three days. x means flower bloomed and _ means flower did not bloom in the garden.
// We need 3 bouquets each should contain 1 flower.
// After day 1: [x, _, _, _, _]   // we can only make one bouquet.
// After day 2: [x, _, _, _, x]   // we can only make two bouquets.
// After day 3: [x, _, x, _, x]   // we can make 3 bouquets. The answer is 3.
// Example 2:

// Input: bloomDay = [1,10,3,10,2], m = 3, k = 2
// Output: -1
// Explanation: We need 3 bouquets each has 2 flowers, that means we need 6 flowers. We only have 5 flowers so it is impossible to get the needed bouquets and we return -1.
// Example 3:

// Input: bloomDay = [7,7,7,7,12,7,7], m = 2, k = 3
// Output: 12
// Explanation: We need 2 bouquets each should have 3 flowers.
// Here is the garden after the 7 and 12 days:
// After day 7: [x, x, x, x, _, x, x]
// We can make one bouquet of the first three flowers that bloomed. We cannot make another bouquet from the last three flowers that bloomed because they are not adjacent.
// After day 12: [x, x, x, x, x, x, x]
// It is obvious that we can make two bouquets in different ways.

// Approach - considering ex 3
//1. Get min and max that will be the range for B.S
// we need 6 flower to make 2 bouquet if no Of flowers are less in array 
// we simplly cannot make a bouqeut - m*k > size of array 
// we need adjacent 3 flower to make a bouquet
// as we need to find min days needed to make a bouquet 
// this is a gain a BS problem
// the range here is min days and max days for flowers to blooms 
// 7 and 12 and answer shld be btn this only 
// get a mid value 
// keep a counter to see 3 adjacent no is under that mid no 
// we increment until the condition is not met 
// here we divide counter - adjacent flower with bouquet 
// to see how many bouqeut can be form
// if this no is greater than required bouquet no, we move start towards right 
// else move the end towards left  
#include<iostream>
using namespace std;

int getBouquetCount(int bloomDay[], int size, int mid, int adjacentFlowerPerBouqeut)
{
    int adjacentFlowers = 0,  bouquetCount = 0;
    
    for (int i = 0; i < size;i++)
    {
       if(bloomDay[i] <= mid)
        {
             adjacentFlowers += 1;
        }
        else
        {
            bouquetCount += (adjacentFlowers / adjacentFlowerPerBouqeut);
            adjacentFlowers = 0;
        }         
    }
      bouquetCount += (adjacentFlowers / adjacentFlowerPerBouqeut);
    return bouquetCount;
    // return (adjacentFlowers/adjacentFlowerPerBouqeut == 0) ? bouquetCount : bouquetCount + 1;
}           

    
int main()
{
    int bloomDay[] = {62,75,98,63,47,65,51,87,22,27,73,92,76,44,13,90,100,85};
    int m = 2, k = 7, size =18;
    int low=INT32_MAX, high = 0;
    
    if(m*k > size)
    {
        cout << " we cannot bloom the flowers";
    }
   
    for (int i = 0; i < size; i++)
    {
        if(low > bloomDay[i] )
            low = bloomDay[i];

        if(high < bloomDay[i] )
            high = bloomDay[i];   
    }
     while(low <= high)
    {
        int mid = low + (high - low) / 2;
        int bouqeutCount = getBouquetCount(bloomDay, size, mid, k);
        if(bouqeutCount < m)
        {
            low = mid + 1;
        }
        else 
        {
            high = mid - 1;
        }
    }
    cout << "No of days for making bouquet is " << low << endl;
}
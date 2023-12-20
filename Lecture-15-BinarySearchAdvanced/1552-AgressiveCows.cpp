// Magnetic Force Between Two Balls
// In the universe Earth C-137, Rick discovered a special form of magnetic force between two balls if they are put in his new invented basket. Rick has n empty baskets, the ith basket is at position[i], Morty has m balls and needs to distribute the balls into the baskets such that the minimum magnetic force between any two balls is maximum.

// Rick stated that magnetic force between two different balls at positions x and y is |x - y|.

// Given the integer array position and the integer m. Return the required force.

// Input: position = [1,2,3,4,7], m = 3
// Output: 3
// Explanation: Distributing the 3 balls into baskets 1, 4 and 7 will make the magnetic force between ball pairs [3, 3, 6]. The minimum magnetic force is 3. We cannot achieve a larger minimum magnetic force than 3.
// Example 2:

// Input: position = [5,4,3,2,1,1000000000], m = 2
// Output: 999999999
// Explanation: We can use baskets 1 and 1000000000.

// Approach 
// As it is min max problem , we could use Binary Search 
// range for distance betwn 3 balls .. 
// low = min of array and high = max - min of array 
// get mid and check if we can place 3 balls accordingly with mid as min distance 
// keep doing until we no longer able to place the balls with mid as min distance 
// the previous one will be our answer 

#include <iostream>
#include<algorithm>
using namespace std;

bool isBallsArrangement(int position[], int size, int distance, int m)
{
    int noOfBalls = 1;
    int ballIndex = 0;
  

    for (int i = 1; i < size; i++)
    {
        if(position[i]- position[ballIndex] >= distance)
        {
            noOfBalls += 1;
            ballIndex = i;
        }
        if(noOfBalls >= m)
            return true;
    }
    return false;
}

int main()
{
    int position[] = {79,74,57,22};
    int m = 4;
    int min = 1;
    int max = 0;
    int size = 4;
      sort(position, position + sizeof(position) / sizeof(position[0]));
    for (int i = 0; i < size; i++)
    {
        if(max< position[i])
            max = position[i];
        if(min > position[i])
        {
            min = position[i];
        }

        max = max - min;
    }
    int ans = -1;
    while(min <= max)
    {
        int mid = min + (max - min) / 2;
        if(mid <=5) 
        {
            int a = 0;
        }
        bool isBallArranged = isBallsArrangement(position, size, mid, m);
        
        if(isBallArranged)
        {
            ans = mid;
            min = mid + 1;
        }
        else{
            max = mid - 1;
        }
    }
    cout << "min distance is " << ans  << endl;
}
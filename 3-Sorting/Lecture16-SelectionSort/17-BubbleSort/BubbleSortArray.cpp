// Bubble sort an array 
// Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted. Here is a simple implementation of Bubble Sort in C++

// Initial array: [5, 2, 9, 1, 5]

// Pass 1:

// Compare 5 and 2 (swap): [2, 5, 9, 1, 5]
// Compare 5 and 9: [2, 5, 9, 1, 5]
// Compare 9 and 1 (swap): [2, 5, 1, 9, 5]
// Compare 9 and 5 (swap): [2, 5, 1, 5, 9]
// Pass 2:

// Compare 2 and 5: [2, 5, 1, 5, 9]
// Compare 5 and 1 (swap): [2, 1, 5, 5, 9]
// Compare 5 and 5: [2, 1, 5, 5, 9]
// Pass 3:

// Compare 2 and 1 (swap): [1, 2, 5, 5, 9]
// Compare 2 and 5: [1, 2, 5, 5, 9]
// Pass 4:

// Compare 1 and 2: [1, 2, 5, 5, 9]
// The array is now sorted, and the algorithm terminates.

// Bubble Sort has a time complexity of O(n^2) in the worst case, making it less efficient than some other sorting algorithms for large datasets. It is primarily used for educational purposes or for small datasets where simplicity is more important than efficiency.
//  time complexity - average o(n2)
//  best case omega(n) - if already sorted array 
// worst case theta(n) - o(n2)

// Use case -- placing the ith element to its right place 
// Bubble Sort is considered a stable sorting algorithm
// because it only swaps adjacent elements if they are in the wrong order, and it doesn't change the relative order of equal elements. If two elements with equal values are adjacent, no swap occurs, ensuring that their original order is preserved.
// Bubble Sort is not the most efficient sorting algorithm, its stability makes it suitable for situations where maintaining the relative order of equal elements is a priority.

#include<iostream>
using namespace std;
int main()
{
    int nums[] = {5,2,3,1};
    // Input: nums = [5,2,3,1]
    // Output: [1,2,3,5]
    int size = 4;
    for (int i = 0; i < size-1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < size -i -1 ; j++)
        {
            if(nums[j] > nums[j+1])
            {
                swap(nums[j], nums[j+1]);
            }
        }
        if(swapped == false) 
        {
            // already sorted 
            break;
        } 
        ;
    }
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }
    
}
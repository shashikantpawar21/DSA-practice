// i/P - {5,2,1,4,3}
//  {1,2,3,4,5}

// 1.Consider a pivot --> 1st element 
// 2. Place it at its place 
// 3. By using pointer see it from left (i)the next elemt is greater than it 
// 4. from right(j) some element it smaller that pivot 
// 5. We swap them and repeat the step until i > j 
// 6. j is correct place of pivot so we swap it there 
// 7. after placing pivot at j .. it acts as partition 
// 8. which means everything to left is smaller than pivot and everything on right is greater than pivot 
// 9. we apply recursion to remaining left and right side of partition until element is 1.

// psuedo code 
// void  qs(arr, low , high)
// if (low < high)  
// {
//     int partition = getPartition(arr, low, high)
//     }
//     qs(arr, low, partition -1);
//     qs(arr, partition + 1);


#include <iostream>
using namespace std;

int getPartition(int* arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j)
    {
        while(arr[i] <= pivot && i <= high-1)
        {
            i++;
        }
    
        while(arr[j] > pivot && i >= low + 1)
        {
            j--;
        }

        if(i<j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int* arr, int low, int high)
{
    if(low < high)
    {
        int partition = getPartition(arr, low, high);
        cout << partition << endl;
        quickSort(arr, low, partition -1);
        quickSort(arr, partition + 1 , high);
    }
}

int main()
{
    int arr[5] = {5, 3, 1, 2, 4};
    quickSort(arr, 0, 5 - 1);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
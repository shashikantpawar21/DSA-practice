// 4 3 2 1 
//  selection sort - Take largest element and swap with last element in each pass 
// 1 3 2  4 - 1st pass 
// 1 2  3  4 - 2nd pass 
// 1  2 3 4 - 3rd pass

#include <iostream>
using namespace std;

void selectionSort(int arr[], int row, int col, int max) {
    if(row==0)
        return;
    if(arr[col] > arr[max])
    {
        max = col;
    }
    if(row != col)
    {
        selectionSort(arr, row, ++col, max);
    }
    else
    {
        if(max != col)
        {
            swap(arr[max], arr[col]);
        }
        selectionSort(arr, --row, 0, 0);
    }
}

int main() {
    int arr[4] = {4, 3, 2, 1};
    selectionSort(arr, 3, 0, 0);

    for (int i = 0; i < 4; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
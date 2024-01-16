// 5 4 3 2 1 
// 1. take the pivot , let say the last no 
// 2. function to make sure that left is smaller and right is greater than pivot eleemnt 
// 3. work with remaining element 

#include <iostream>
using namespace std;

void quickSort(int* arr, int s, int e) {
    if(s>= e) return;
    int m = s + (e - s) / 2;
    int pivot = arr[m];
    int i = s, j = e;
    while(i <=j)
    {
        while(arr[i] < pivot )
        {
            i++;
        }
        while(arr[j] > pivot)
        {
            j--;
        }
        if(i <=j)
        swap(arr[i++], arr[j--]);
    }
   
    quickSort(arr, s, j);
    quickSort(arr, i, e);

}

int main() {
    int arr[5] = {5, 3, 1, 2, 4};
    quickSort(arr, 0, 5 );

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
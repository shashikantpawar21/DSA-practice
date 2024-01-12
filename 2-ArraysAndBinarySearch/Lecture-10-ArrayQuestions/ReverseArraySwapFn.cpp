#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void reverse(int arr[], int n)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int arr1[7] = {-3, 6, 6, 4, -94, 44, -5};

    printArray(arr, 5);
    reverse(arr, 5);
    printArray(arr, 5);

    printArray(arr1, 5);
    reverse(arr1, 5);
    printArray(arr1, 5);
}
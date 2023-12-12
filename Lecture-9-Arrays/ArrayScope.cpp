#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Printing array --> ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void update(int arr[], int size)
{
    arr[0] = 120;
    printArray(arr, size);
}

int main()
{
    int arr[3] = {1, 2, 3};
    update(arr, 3);
    printArray(arr, 3);
}

// Whenever a array is passed to another function, it pass only it base address..
// the other get the base address and update the value at base address
// This is the reason, if the value is changed it is changed in main function also

// NOTE -  If you passed to another function , be caution not to update or update intentionally
// knowing it will be changed in main function too
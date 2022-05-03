#include <iostream>
using namespace std;

// Sum of all element of array

int main()
{
    int size = 0;
    cout << "size of array --> ";
    cin >> size;
    int arr[100];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    cout << " sum --> " << sum << endl;
}
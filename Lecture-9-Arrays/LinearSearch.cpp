#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return true;
    }
    return false;
}

int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int key = 0;
    cout << "enter element to search --> ";
    cin >> key;

    bool found = search(arr, 9, key);

    if (found)
        cout << "key is present";
    else
        cout << "key is absent";
}
#include <iostream>
using namespace std;

//{1,2,3,4,5,6}
// /{2,1,4,3,6,5}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 6; i = i + 2)
    {
        if (i + 1 < 6)
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
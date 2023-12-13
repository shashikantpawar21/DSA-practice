// Sort 0  1 in an array
// 0 1 0 1 1 0

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, 1, 0, 1, 1, 0};
    int left = 0, right = 5; //(n-1)
                             // left 0 --> left ++ right 0 --> no increment as need to swap toward left
                             // left 1 --> no increment as need to swap to right with 0, right 1 increment
                             // -- > at this point if right is at 0 swap and increment both else only increment right

    while (left <= right)
    {
        if (arr[left] == 1 && arr[right] == 0)
        {
            arr[left] = 0;
            arr[right] = 1;
            left++;
            right--;
        }
        if (arr[left] == 0)
            left++;
        if (arr[right] == 1)
            right--;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}

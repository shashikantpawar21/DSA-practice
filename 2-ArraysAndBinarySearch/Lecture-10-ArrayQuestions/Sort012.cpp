// Sort 0  1 in an array
// 0 1 0 1 1 0

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, 1, 0, 2, 1, 2, 0};
    // 	arr[i] == 0  --> i++
    //  arr[i] == 1, it shld first search then is any zero to swap with
    // if((arr[i] ==1 && arr[j]=0)
    // 	swap(arr[i], arr[j])
    // 	i++; j++;
    // if((arr[i] ==2 && arr[k]=0)
    // 	swap(arr[i], arr[k])
    // 	i++; k--;

    // arr[j] == 1  --> j++
    // if((arr[j] ==2 && arr[k]=1)
    // 	swap(arr[j], arr[k])
    // 	j++; k--;

    // arr[k] == 2  --> k--

    int i = 0, j = 1, k = 6; //(n-1)

    while (i <= j && j <= k)
    {
        // when element at i is not zero
        if (arr[i] == 1 && arr[j] == 0)
        {
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
        if (arr[i] == 2 && arr[k] == 0)
        {
            swap(arr[i], arr[k]);
            i++;
            k--;
        }
        // when element at j is not 1
        if (arr[j] == 2 && arr[k] == 1)
        {
            swap(arr[k], arr[j]);
            k--;
            j++;
        }
        if (arr[j] == 2 && arr[k] == 0)
        {
            swap(arr[k], arr[j]);
            k--;
        }
        if (arr[i] == 0)
            i++;
        if (arr[j] == 1)
            j++;
        if (arr[k] == 2)
            k--;
    }
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
}

#include<iostream> 
#include<vector>
using namespace std;

void merge(vector<int> &arr, int start, int mid, int end)
{
    vector<int> temp;
    int left = start;
    int right = mid + 1;

    while(left <= mid && right <= end)
    {
        if(arr[left] <= arr[right])
        {
            temp.push_back(arr[left++]);
        }
        else 
        {
            temp.push_back(arr[right++]);
        }
    }

    while(left <= mid)
    {
        temp.push_back(arr[left++]);
    }

    while(right <= end)
    {
        temp.push_back(arr[right++]);
    }
    cout << "merge " << start << " " << end << " " << endl;
    for (int i = start; i <= end; i++)
    {
        arr[i] = temp[i - start];
        cout << "start " << start << " end "  << end  << " element "  << arr[i]  << " at "  <<  i  << " index ";
        cout << endl;
     }
        cout << endl;
}
void mergeSort(vector<int> &arr, int start, int end)
{
    if(start>=end) return;
    cout << "merge sort " << start << " " << end << " " << endl;
    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);

    merge(arr, start, mid, end);
    
}

int main()
{
    vector<int> arr = {6, 3, 5, 1, 4};
    mergeSort(arr, 0, 4);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
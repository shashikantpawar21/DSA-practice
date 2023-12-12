#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int> &arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    cout << ans;
    for (int i = 1; i < arr.size(); i++)
    {
        ans = ans ^ i;
    }
    return ans;
}

int main()
{

    vector<int> vect;
    vect.push_back(4);
    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(3);
    vect.push_back(1);
    int ans = findDuplicate(vect);
    cout << ans;
}
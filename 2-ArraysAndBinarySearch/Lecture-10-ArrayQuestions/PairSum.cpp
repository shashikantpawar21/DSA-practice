// Sample Input 1:
// 5 5
// 1 2 3 4 5
// Sample Output 1:
// 1 4
// 2 3
// Explaination For Sample Output 1:
// Here, 1 + 4 = 5
//       2 + 3 = 5
// Hence the output will be, (1,4) , (2,3).
// Sample Input 2:
// 5 0
// 2 -3 3 3 -2
// Sample Output 2:
// -3 3
// -3 3
// -2 2
// return value in sorted order of first value and nested value should also be sorted
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printNestedVector(const std::vector<std::vector<int>> &nestedVec)
{
    for (const auto &innerVec : nestedVec)
    {
        for (int value : innerVec)
        {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5, pairSum = 5;
    vector<vector<int>> ans; // vector will be learned later

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == pairSum)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));

                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    printNestedVector(ans);
}

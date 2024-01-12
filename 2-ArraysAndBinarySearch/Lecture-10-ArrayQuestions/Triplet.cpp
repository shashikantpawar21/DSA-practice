// Sample Input 2:
// 3
// 6
// 1 2 3 1 2 3
// 6
// 4
// 1 2 3 4
// 11
// 6
// 1 1 2 2 1 1
// 4
// Sample Output 2:
// 1 2 3
// -1
// 1 1 2
// Explanation for Sample Input 2:
// In the first input, (1, 2, 3) is the only unique triplet that adds up to six.

// In the second input, since there are no such triplets, we print -1.

// For the third input, the only distinct triplet is (1, 1, 2), so just print 1 1 2

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
    int arr[] = {1, 2, 3, 1, 2, 3};
    int size = 6, triplet = 6;
    vector<vector<int>> ans; // vector will be learned later
                             // Brute force approach - o(n3)
                             // Optimized soln will be taken care ahead not now
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == triplet)
                {
                    vector<int> temp;
                    cout << i << " " << j << " " << k << " " << endl;
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << " " << endl;
                    temp.push_back((arr[i]));
                    temp.push_back((arr[j]));
                    temp.push_back((arr[k]));

                    ans.push_back(temp);
                    cout << endl;
                }
            }
        }
    }
    // sort(ans.begin(), ans.end());
    // printNestedVector(ans);
}

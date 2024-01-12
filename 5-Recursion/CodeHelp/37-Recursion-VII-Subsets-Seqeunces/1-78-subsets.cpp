// Given an integer array nums of unique elements, return all possible
// subsets
//  (the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.

// Example 1:

// Input: nums = [1,2,3]
// Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
// Example 2:

// Input: nums = [0]
// Output: [[],[0]]

// Constraints:

// 1 <= nums.length <= 10
// -10 <= nums[i] <= 10
// All the numbers of nums are unique.

// APPROACH
// In subset , each subset will have minimum 1 item missing
// We will solve using resurson with index and exclude index
//  base case - run until size of arr --> index == nums.size() --> return
//  exclude first element so index passed is 1 at last n not zero
//  1st call -> generate() -   1 2 3 ,      [] ,      [] ,       1 (2 -value)
//                           -   nums  , allsubsets, subset, index
//  Nested calls 
//  1 - 1st call -> generate() -  1 2 3, [] , [], 2 (3 -value)
//      1st- 1st call -> generate() -  1 2 3, [] , [], 3 (no value ..index not in arr)
//                         - index == nums.size then insert subset into all subset now **[]**
//                         - Returns to calling function (2nd call remaining lines)
// remaining lines after generate function call they will same param 
// 2nd call -> generate   -  1 2 3, [] , [], 2 (3 -value) 
//                        - add value at index[2] in subset [3]
//      4th call -> generate   -  1 2 3, [] , [3], 3 (no value ..index not in arr)
//                         - index == nums.size then insert subset into all subset now **[3]**
//                         - Returns to calling function (2nd call remaining lines)
// 2nd call -> generate   -  1 2 3, [] , [], 2 (3 -value) 
//                        - remove value at index[2] in subset []
//     
#include <iostream>
#include <vector>
using namespace std;

void generate(vector<int> &nums, vector<vector<int>> & allsubSets, vector<int> &subset, int index)
{
    if (index == nums.size())
    {
        allsubSets.push_back(subset);
        return;
    }

    // index element not in subset
    generate(nums, allsubSets, subset, index + 1);

    // ith element in the subset
    subset.push_back(nums[index]);

    generate(nums, allsubsets, subset, index + 1);
    subset.pop_back();
}

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> allsubsets;
    vector<int> subset;
    generate(nums, allsubsets, subset, index);
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    vector<vector<int>> ans = subsets(nums);

}

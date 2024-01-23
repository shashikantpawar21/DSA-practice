// Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

// A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

// Example 1:

// Input: digits = "23"
// Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
// Example 2:

// Input: digits = ""
// Output: []
// Example 3:

// Input: digits = "2"
// Output: ["a","b","c"]

#include <iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> combinations(string digits, string ans) {
    string letters[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> res;
    if(digits.empty())
    {
        // cout << ans << " ";
        res.push_back(ans);
        return res;
    }
    int number = digits.at(0) - '0';
    string letter = letters[number];

    for (int i = 0; i < letter.size(); i++)
    {
        vector<string> temp = combinations(digits.substr(1), ans + letter[i]);
        for (int i = 0; i < temp.size(); i++)
        {
            res.push_back(temp[i]);
        }
    }
    return res;
}

int main() {
    vector<string> ans = combinations("234", "");
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
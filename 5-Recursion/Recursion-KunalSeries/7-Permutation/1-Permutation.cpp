//  str - abc   o/p - abc acb  bca bac cab cba


#include <iostream>
#include <string>
#include<vector>
using namespace std;

void permutation(string input, string processedStr) {
    if(input.size() ==0)
    {
        cout << processedStr << " ";
        return;
    }
    //  iteration
    char ch = input.at(0);
    for (int i = 0; i <= processedStr.size(); i++)
    {
        permutation(input.substr(1, input.size() - 1), processedStr.substr(0, i) + ch + processedStr.substr(i));
    }
}

vector<string> permutationList(string input, string processedStr) {
    vector<string> strList;
    vector<string> strList1;
    if(input.size() ==0)
    {
        // cout << processedStr << " ";
         strList.push_back(processedStr);
         return strList;
    }
    //  iteration
    char ch = input.at(0);
    for (int i = 0; i <= processedStr.size(); i++)
    {
       strList1 =  permutationList(input.substr(1, input.size() - 1), processedStr.substr(0, i) + ch + processedStr.substr(i));
       cout << "input " << input << endl;
       for (int i = 0; i < strList1.size(); ++i)
       {
           cout << strList1[i] << " ";
           strList.push_back(strList1[i]);
        }
        cout << endl;
    }
 
    return strList;
}

int countPermutation(string input, string processedStr) {
    int count = 0;
    if(input.size() ==0)
    {
        cout << processedStr << " ";
        return ++count;
    }
    //  iteration
    char ch = input.at(0);
    for (int i = 0; i <= processedStr.size(); i++)
    {
        count = count +  countPermutation(input.substr(1, input.size() - 1), processedStr.substr(0, i) + ch + processedStr.substr(i));
    }
    return count;
}

int main() {
    // permutation("abc", "");
    vector<string> premutations = permutationList("abc", "");
    int count  = countPermutation("abc", "");
    for (int i = 0; i < premutations.size(); ++i) {
        cout << premutations[i] << " ";
    }
    cout << endl
         << count << endl;
}
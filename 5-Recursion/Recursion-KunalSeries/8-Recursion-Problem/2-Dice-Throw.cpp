//  4 --> [1 2 3 4 5 6] 
//  return 4 combination - 4  3 1   2 2   2 1 1   

#include <iostream>
#include<vector>
using namespace std;

void diceThrow(int n, string ans) {
    if(n ==0)
    {
        cout << ans << " ";
        return;
    }

    for (int i = 1; i <= 6 && i <= n; i++)
    {
        diceThrow(n-i, ans+ to_string(i));
    }
}

vector<string> diceThrowList(int n, string ans) {
    vector<string> res;
    if(n ==0)
    {
        res.push_back(ans);
        return res;
    }

    for (int i = 1; i <= 6 && i <= n; i++)
    {
        vector<string> temp = diceThrowList(n-i, ans+ to_string(i));
        for (int i = 0; i < temp.size(); i++)
        {
            res.push_back(temp[i]);
        }
    }
    return res;
}

int main() {
    vector<string> ans = diceThrowList(3, "");
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
            
}
// [1,2,3] --> [], [1], [2], [1,2] [3] [1,3], [2,3] [1,2,3]

#include <iostream>
#include<vector> 
using namespace std;

vector<vector<int>> subset(int* arr, int n) {
    vector<vector<int>> ans;
    vector<int> element;

   
    for (int i = 0; i < n; ++i)
    {
        if(i==0) ans.push_back(vector<int>());
        int size = ans.size();
        for (int k = 0; k < size; ++k)
        {
            ans.push_back(ans[k]);
        }
        
        for (int j = size; j < ans.size(); ++j)
        {
            vector<int> value = ans[size];
            value.push_back(arr[i]);
            
            cout << "size " << value.size() << endl; 
            for (int i = 0; i < value.size(); ++i)
            {
                cout << value[i] << " ";
            }
            cout << endl;
            ans[size] = value;
        }
    }
    return ans;
}

int main() {
    int arr[3] = { 1, 2, 3 };
    vector<vector<int>> ans = subset(arr, 3);
    // cout << "size " << ans.size() << endl;
    // for (int i = 0; i < ans.size(); ++i)
    // {
    //     for (int j = 0; j < ans[i].size(); ++j)
    //     {
    //         cout << ans[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}
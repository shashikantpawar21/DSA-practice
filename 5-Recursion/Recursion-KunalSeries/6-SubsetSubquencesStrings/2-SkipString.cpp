//  i/p --> skipapple --> skip apple --> o/p --> skip

#include <iostream>
#include<string>
using namespace std;


string skipString(string s, string c, int index)
{
    string ans = "";
    if(index>= s.length())
        return ans;
    size_t foundIndex = s.find(c, index);
    cout << foundIndex << " ";

    char ch = s[index];
    if(foundIndex ==index)
    {
        return skipString(s, c, index + 5);
    }
    return s[index] + skipString(s, c, index + 1);
}
int main() {
    string s= "skipapple";
    string res = skipString(s, "apple", 0);
    cout << res << endl;
}
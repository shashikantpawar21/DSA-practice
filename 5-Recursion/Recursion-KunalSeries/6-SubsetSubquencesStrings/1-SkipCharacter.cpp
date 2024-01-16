//  i/p --> baccad --> skip a --> o/p --> bccad

#include <iostream>
#include<string>
using namespace std;

string skip(string s, char c, int index, string ans) {

    if(index == s.length())
        return ans;
        if(s[index] != c)
            ans = ans + s[index];
    return skip(s, c, index+1,ans);
    
}

string skip1(string s, char c, int index)
{
    string ans = "";
    if(index== s.length())
        return ans;

    if(s[index] !='a')
        return s[index] + skip1(s, c, index + 1);
    return skip1(s, c, index + 1);
}
int main() {
    string s= "baccad";
    // string res = skip(s, 'a', 0, "");
    string res = skip1(s, 'a', 0);
    cout << res << endl;
}
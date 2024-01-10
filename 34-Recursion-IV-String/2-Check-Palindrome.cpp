// check palindrome 
//  abba --> abba -- checkPalindrome is same , then it is a palindrome 

#include<iostream>
#include<string>
using namespace std;
bool checkPalindrome(string& s, int start, int end)
{
    if(start > end)
    {
        return true;
    }
    
    if(s[start] != s[end])
    {
        return false;
    }

    return checkPalindrome(s, ++start, --end);
}

int main()
{
    string s = "";
    bool isPalindrome = checkPalindrome(s, 0, s.length()-1);
    if(isPalindrome)
    {
        cout << "string is palindrome" << endl;
    }
    else 
    {
        cout << "string is not palindrome" << endl;
    }
}
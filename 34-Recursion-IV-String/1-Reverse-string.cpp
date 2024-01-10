// i/p - abcde 
// o/p - edcba 

#include<iostream>
using namespace std;
string reverse(string& s, int start, int end)
{
    if(start > end)
    {
        return s;
    }
    char temp = s[start];
    s[start] = s[end];
    s[end] = temp;

    return reverse(s, ++start, --end);
}

int main()
{
    string s = "abcde";
    s = reverse(s, 0, 4);
    cout << "reverse string is " << s << endl;
}
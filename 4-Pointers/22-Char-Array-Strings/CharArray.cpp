#include<iostream>
using namespace std;

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

// 344. Reverse String - Leetcode 
void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while(s<e)
    {
        swap(name[s++], name[e--]);
    }
}
int main()
{

    char name[16] = "shashi" ;
    int length = getLength(name);
    cout << "Length of word " << name << " is " << length << endl;

    reverse(name, length);
    cout << name << endl;
}
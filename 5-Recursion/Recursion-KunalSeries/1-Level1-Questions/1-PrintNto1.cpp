#include<iostream>
using namespace std; 

void print(int n) {
    if(n==0)
    {
        cout << endl;
        return;
    }
    cout << n << " ";
    print(n-1);
    cout << n << " ";
}

int main(){
    print(5);
}
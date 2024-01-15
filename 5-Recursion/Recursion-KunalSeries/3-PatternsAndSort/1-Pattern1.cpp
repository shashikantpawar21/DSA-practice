//  * * * *
//  * * *
//  * *
//  *


// i=0 
// j <= n-i -1 
//  This is iterative way 

 #include <iostream>
 using namespace std;
 
 void pattern(int i) {
     if(i==0)
         return;
     int j = i;
     while (j>0)
     {
         cout << "* ";
         j--;
     }
     cout << endl;
     pattern(i - 1);
  }
 
 void pattern1(int i, int j) {
     if(i==0)
         return;
     if(i !=j)
     {
        cout << "* ";
        pattern1(i, j + 1);   
     }
     else
     {
        cout << endl;
        pattern1(i - 1, 0);
     }
  }
  void pattern2(int i, int j) {
     if(i==0)
         return;
     if(i !=j)
     {
        pattern2(i, j + 1);   
        cout << "* ";
     }
     else
     {
        pattern2(i - 1, 0);
        cout << endl;
     }
  }
 
 int main() {
     pattern1(4,0);
     pattern2(4,0);
   }
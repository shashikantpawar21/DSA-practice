//  Bubble Sort - Move the larger element towards the end in one pass 

//  4 3 2 1 

//  This is similar to this pattern 
//  * * * *  -> compare 4 with next element and swap if greater 
//  * * *   -> compare 3 and swap if greater 
//  * *     -> compare 2 and swap if greater 
//  *       -> compare 1 and swap 

#include <iostream>
using namespace std;

void bubbleSort(int* arr, int i, int j) {

   if(i==0)
       return;
    if(arr[j] > arr[j+1])
    {
        swap(arr[j], arr[j + 1]);
    }
    if(i==j)
    {
        bubbleSort(arr, i - 1, 0);
    }        
    else 
    {
        bubbleSort(arr, i, ++j);
    }
  return;
}

int main() {
    int arr[4] = {4, 3, 2, 1};
    bubbleSort(arr, 3, 0); 
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// Linear find array 
//  arr - 1 2 5 15  54 -- target 15

#include <iostream>
#include<vector>
using namespace std;

bool find(int* arr, int target, int index, int size) {
    if(index == size)
        return false;
    return ((arr[index] == target) || find(arr, target, index + 1, size));
}

int findIndex(int* arr, int target, int index, int size) {
    if(index == size)
        return -1;
    if(arr[index] == target)
        return index;
    return findIndex(arr, target, index + 1, size);
}

int findIndexLast(int* arr, int target, int index) {
    if(index == -1)
        return -1;
    if(arr[index] == target)
        return index;
    return findIndexLast(arr, target, index - 1);
}

vector<int> findAllIndex(int* arr, int target, int index, int size,  vector<int> indexes) {
    if(index == size)
        return indexes;
    if(arr[index] == target)
        indexes.push_back(index);
    return findAllIndex(arr, target, index + 1, size, indexes);
}

// Find all without passing indexes vector in the arguments 
vector<int> findAllIndex1(int* arr, int target, int index, int size ) {
    vector<int> indexes;
    if(index == size)
        return indexes;
    indexes =  findAllIndex1(arr, target, index + 1, size);
    if(arr[index] == target)
    {
        indexes.push_back(index);
    }
    return indexes;
}

int main() {
    int arr[5] = {1, 15, 5, 15, 54};
    int target = 15;
    bool  isPresent = find(arr, target, 0, 5);
    cout << isPresent << endl;

    int index = findIndex(arr, target, 0, 5);
    cout << index << endl; 

    int indexRev = findIndexLast(arr, target, 4);
    cout << indexRev << endl;
    
    vector<int> indexes;
    vector<int> indexes1 =  findAllIndex(arr, target, 0, 5, indexes);
    // vector<int> indexes1 =  findAllIndex1(arr, target, 0, 5);
    cout << "index size - " <<  indexes.size() << endl;
    for (int i = 0; i < indexes.size(); ++i) {
        cout << "indexes " << i << " " << indexes[i] << " ";
    }
    cout << endl <<  "index size 1 - " <<  indexes1.size() << endl;
    for (int i = 0; i < indexes1.size(); ++i) {
        cout << "indexes 1 - " << i << " " << indexes1[i] << " ";
    }
    cout << endl;
}
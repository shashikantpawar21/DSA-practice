#include <iostream>
using namespace std;

int main()
{
    int size = 4;
    // int numbers[size] = {1, 2, 6, 4}; // bad practice to use variable size for now ..take a max value of 100 or 100000
    int numbers[100] = {1, 2, 6, 4}; // good practice to use constant value 
    // min -1  max-6
    int min = numbers[0];
    int max = numbers[0];
    for (int i = 1; i < size; i++)
    {
        if (numbers[i] < min)
        {
            min = numbers[i];
        }
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }
    cout << "Min value is " << min << endl;
    cout << "Max value is " << max << endl;
}
#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << i + 1 << " value is " << arr[i] << " " << endl;
    }
    cout << "printed the array" << endl
         << endl;
}

void printArray(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << i + 1 << " value is " << arr[i] << " " << endl;
    }
    cout << "printed the array" << endl
         << endl;
}

int main()
{
    // array declaration
    int colors[4];
    cout << colors[1] << " ";

    // array initialisation
    int numberSize = 3;
    int numbers[numberSize] = {1, 2, 3};
    cout << endl
         << "print numbers" << endl;
    printArray(numbers, numberSize);
    cout << "value of numbers[5] " << numbers[5] << " " << endl; // This would not throw exception but return a artibtary value

    // int number[1]   // same varaible cannot be declared again .. but it throws runtime exceptions

    int numbers1[5] = {1, 2, 3}; // can initialize less value, the value not initialized has artibitary value

    // int numbers2[3] = {1, 2, 3, 6}; // can not initialize more value that requested - too many value intializers error
    // It throws compile time exceptions
    int number2Size = 4;
    int numbers2[4] = {0}; // Initalize all values with 0. This works only with zeros
    cout << "print numbers2" << endl;
    printArray(numbers2, number2Size);

    int number3Size = 4;
    int numbers3[number3Size];
    fill_n(numbers3, number3Size, 1); // It initialize all values with 1 )fill_n(arr, size, value)
    cout << "print numbers3" << endl;
    printArray(numbers3, number3Size);
    int sizeOfNumber3 = sizeof(numbers3) / sizeof(int);
    cout << "size of number3 is " << sizeOfNumber3 << endl;
    // size will give memmory reserved by the array not the memory used
    // e.g number1 - size is 5 but only 3 value are assigned so length is 3 here
    // in case we want to only initialize we hv to pass the length explicitly for now

    char chars[4] = {'a', 'b', 'c', 'd'};
    cout << "print chars" << endl;
    printArray(chars, 4);
}
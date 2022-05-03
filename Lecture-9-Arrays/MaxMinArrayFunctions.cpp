#include <iostream>
using namespace std;

int getMax(int arr[], int size)
{
    int maxValue = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        // if (arr[i] > max)
        // {
        //     max = arr[i];
        // }
        maxValue = max(maxValue, arr[i]);
    }
    return maxValue;
}
int getMin(int arr[], int size)
{
    int minValue = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        // if (arr[i] < minValue)
        // {
        //     minValue = arr[i];
        // }
        minValue = min(minValue, arr[i]);
    }
    return minValue;
}

int main()
{
    int size = 4;
    int numbers[100] = {1, 2, 3, 4};
    cout << "Max value is " << getMax(numbers, 4) << endl;
    cout << "Min value is " << getMin(numbers, 4) << endl;
}

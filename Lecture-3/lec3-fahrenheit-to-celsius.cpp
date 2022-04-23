#include <iostream>
using namespace std;

// sum of n natural no's
int main()
{
    float fahrentiateTemp = 0;
    cout << "What is the fahrenheit temperature" << endl;
    cin >> fahrentiateTemp;

    float celsiusTemp = ((fahrentiateTemp - 32) * 5) / 9;
    cout << "fahrenheit temperature " << fahrentiateTemp << " in celsius is " << celsiusTemp << endl;
}
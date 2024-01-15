#include <iostream>
using namespace std;

int digitProduct(int n)
{
    if(n ==0)
        return 1;
    return n % 10 * digitProduct(n / 10);

}
int main() {
    int product = digitProduct(1234);
    cout << product << endl;
}
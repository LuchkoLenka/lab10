#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double b, z1, z2;
    cout << "Enter the value of b: ";
    cin >> b;

    // Calculate Z1
    z1 = (sqrt(2 * b + 2) * sqrt(pow(b, 2) - 4)) / (sqrt(pow(b, 2) - 4 + b + 2));
    cout << "Z1 = " << z1 << endl;

    // Calculate Z2
    z2 = 1 / sqrt(b + 2);
    cout << "Z2 = " << z2 << endl;

    return 0;
}
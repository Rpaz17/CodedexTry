#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double num{};

    cout << "Enter a number (double): ";
    cin >> num;

    cout << "The square root of " << num << " is: " << sqrt(num) << endl;
    cout << "The cube root of " << num << " is: " << cbrt(num) << endl;

    cout << "The sin of " << num << " is: " << sin(num) << endl;
    cout << "The cos of " << num << " is: " << cos(num) << endl;
    cout << "The round of " << num << " is: " << round(num) << endl;
    cout << endl;

    double power{};
    cout << "Enter a power to raise " << num << " to: ";
    cin >> power;
    cout << num << " raised to the power of " << power << " is: " << pow(num, power);

    return 0;
}
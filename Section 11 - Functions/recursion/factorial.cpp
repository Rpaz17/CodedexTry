#include <iostream>

using namespace std;

unsigned long long factorial(unsigned long long);

unsigned long long factorial(unsigned long long f)
{
    if (f == 0)
    {
        return 1; // base case
    }
    return f * factorial(f - 1); // recursion
}

int main()
{
    cout << factorial(3) << endl;
    return 0;
}
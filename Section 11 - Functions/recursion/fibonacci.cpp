#include <iostream>
#include <string>

using namespace std;

unsigned long long fibonacci(unsigned long long n);

unsigned long long fibonacci(unsigned long long n)
{
    if (n <= 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    cout << fibonacci(5) << endl;
    return 0;
}
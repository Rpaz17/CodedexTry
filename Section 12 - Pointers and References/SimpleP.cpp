#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

    int num = 10;
    cout << "Value: " << num << endl;
    cout << "Sizeof: " << sizeof num << endl;
    cout << "Address: " << &num << endl;

    int *p;
    cout << "Value: " << p << endl;
    cout << "Sizeof: " << sizeof p << endl;
    cout << "Address: " << &p << endl;

    p = nullptr;
    cout << "Value: " << p << endl;

    int *p1 = nullptr;
    double *p2 = nullptr;
    unsigned long long *p3 = nullptr;
    vector<string> *p4 = nullptr;
    string *p5 = nullptr;

    cout << "Sizeof p1: " << sizeof p1 << endl;
    cout << "Sizeof p2: " << sizeof p2 << endl;
    cout << "Sizeof p3: " << sizeof p3 << endl;
    cout << "Sizeof p4: " << sizeof p4 << endl;
    cout << "Sizeof p5: " << sizeof p5 << endl;

    cout << endl;
    return 0;
}
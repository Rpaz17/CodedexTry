#include <iostream>
#include <string>
#include <vector>

using namespace std;

void passbyValue1(int num);
void passbyValue2(string s);
void passbyValue3(vector<string> v);
void printVector(vector<string> s);

void passbyValue1(int num)
{
    num = 1000;
}

void passbyValue2(string s)
{
    s = "Changed";
}

void passbyValue3(vector<string> v)
{
    v.clear(); // delete all vector elements
}

void printVector(vector<string> s)
{
    for (auto v : s)
    {
        cout << v << " " << endl;
    }
}

int main()
{
    int num{10};
    int another_num{20};

    cout << "num before calling passbyValue1: " << num << endl;
    passbyValue1(num);
    cout << "num after calling passbyValue1: " << num << endl;

    cout << "another_num before calling passbyValue1: " << another_num << endl;
    passbyValue1(another_num);
    cout << "another_num after calling passbyValue1: " << num << endl;

    string name{"Frank"};
    cout << "name before calling passbyValue2: " << name << endl;
    passbyValue2(name);
    cout << "name after calling passbyValue2: " << name << endl;
}
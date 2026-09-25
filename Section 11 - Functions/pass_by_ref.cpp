#include <iostream>
#include <string>
#include <vector>

using namespace std;

void passbyRef1(int &num);
void passbyRef2(string &s);
void passbyRef3(vector<string> &v);
void printVector(const vector<string> &s);

void passbyRef1(int &num)
{
    // it will change if it comes in because its passed by reference not by value
    num = 1000;
}

void passbyRef2(string &s)
{
    s = "Changed";
}

void passbyRef3(vector<string> &v)
{
    v.clear(); // delete all vector elements, it will do it!!!
}

void printVector(const vector<string> &s)
{
    for (auto v : s)
    {
        cout << v << " " << endl;
    }
}
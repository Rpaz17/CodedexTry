#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ "};
const string key{"DEFGHIJKLMNOPQRSTUVWXYZABC_defghijklmnopqrstuvwxyzabc"};

int main()
{
    string message;
    string dmessage;
    string str{};
    size_t index{};
    char x;

    cout << "Enter the message to encrypt: ";
    getline(cin, message);

    // encrypt
    for (char c : message)
    {
        index = alphabet.find(c);

        if (index != string::npos)
        {
            x = key.at(index);
            str.insert(str.begin(), x);
        }
    }
    message = str;

    cout << "your encrypted message: " << message << endl;

    cout << " ------------------------------------ " << endl;
    str.clear();
    cout << "Ready to decrypt?" << endl;
    for (char c : message)
    {
        index = key.find(c);

        if (index != string::npos)
        {
            x = alphabet.at(index);
            str.insert(str.begin(), x);
        }
    }
    dmessage = str;

    cout << "your decrypted message: " << dmessage << endl;

    return 0;
}
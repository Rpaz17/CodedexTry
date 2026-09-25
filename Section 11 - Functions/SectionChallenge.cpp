#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display_menu();
void list_numbers(const vector<int> &v);
void add_number(vector<int> &v);
void list_mean(const vector<int> &v);
void list_smallest(const vector<int> &v);
void list_largest(const vector<int> &v);
vector<int> numbers{};
char selection{};

int main()
{

    do
    {
        // display menu
        display_menu();

        switch (selection)
        {
        case 'P':
        case 'p':
            list_numbers(numbers);
        case 'A':
        case 'a':
            add_number(numbers);
        case 'M':
        case 'm':
            list_mean(numbers);
        case 'S':
        case 's':
            list_smallest(numbers);
        case 'L':
        case 'l':
            list_largest(numbers);
        case 'Q':
        case 'q':
            cout << "BYE!" << endl;
            break;
        default:
            cout << "Make sure to select a letter from the menu" << endl;
        }
    } while (selection != 'Q' && selection != 'q');

    cout << endl;
    return 0;
}

void display_menu()
{
    cout << "P - print numbers" << endl;
    cout << "A -  add a number" << endl;
    cout << "M - display mean of numbers" << endl;
    cout << "S - display smallest number" << endl;
    cout << "L - largest number" << endl;
    cout << "Q - Quit" << endl;
    cout << "Enter your selection: ";
    cin >> selection;
}

void list_numbers(const vector<int> &v)
{
    if (v.size() == 0)
    {
        cout << "[] - List is empty" << endl;
    }
    else
    {
        cout << "[";
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << "]" << endl;
    }
}

void add_number(vector<int> &v)
{
    int num;
    cout << "Enter a number to add to the list:";
    cin >> num;
    v.push_back(num);
    cout << num << " added" << endl;
}

void list_mean(const vector<int> &v)
{
    if (v.size() == 0)
    {
        cout << "Unable to calculate mean -  no data" << endl;
    }
    else
    {
        int total;
        for (auto sum : v)
        {
            total += sum;
        }
        cout << "The mean is: " << static_cast<double>(total) / v.size() << endl;
    }
}

void list_smallest(const vector<int> &v)
{
    if (v.size() == 0)
    {
        cout << "Unable to determine smallest -  no data" << endl;
    }
    else
    {
        int small = v.at(0);
        for (auto s : v)
        {
            if (s < small)
            {
                small = s;
            }
        }
        cout << "The smallest number is: " << small << endl;
    }
}

void list_largest(const vector<int> &v)
{
    if (v.size() == 0)
    {
        cout << "Unable to determine largest -  no data" << endl;
    }
    else
    {
        int large = v.at(0);
        for (auto l : v)
        {
            if (l > large)
            {
                large = l;
            }
        }
        cout << "The largest number is: " << large << endl;
    }
}

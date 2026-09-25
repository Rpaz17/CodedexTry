#include <iostream>
using namespace std;

int main()
{
    cout << "Enter room width: " << endl;
    int room_width = 0;
    cin >> room_width;
    cout << "Enter room length: " << endl;
    int room_length = 0;
    cin >> room_length;
    cout << "The area of the room is: " << room_width * room_length << " square feet" << endl;

    return 0;
}
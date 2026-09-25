#include <iostream>

using namespace std;

int main()
{
    // char vowels[]{'a', 'e', 'i', 'o', 'u'};
    // cout << "The first vowel is: " << vowels[0] << endl;
    // cout << "The last vowel is: " << vowels[4] << endl;

    // cin >> vowels[5]; out of bounds - dont do this!

    // double hi_temps[]{90.1, 89.8, 77.5, 81.6};
    // cout << "The first high temperature is: " << hi_temps[0] << endl;

    // hi_temps[0] = 100.7;
    // cout << "The first high temperature is now: " << hi_temps[0] << endl;

    int test_scores[5]{};

    cout << "\nThe fist score at index 0: " << test_scores[0];
    cout << "\nThe second score at index 1: " << test_scores[1];
    cout << "\nThe third score at index 2: " << test_scores[2];
    cout << "\nThe fourth score at index 3: " << test_scores[3];
    cout << "\nThe fifth score at index 4: " << test_scores[4];

    cout << "\nEnter 5 test scores: ";
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];

    cout << "The upgrade is: ";
    cout << "\nThe fist score at index 0: " << test_scores[0];
    cout << "\nThe second score at index 1: " << test_scores[1];
    cout << "\nThe third score at index 2: " << test_scores[2];
    cout << "\nThe fourth score at index 3: " << test_scores[3];
    cout << "\nThe fifth score at index 4: " << test_scores[4];
}
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<char> vowels{'a', 'e', 'i', 'o', 'u'};
    cout << vowels[0]; // this won't be bounce checked

    vector<int> test_scores(3, 100); // in this case you initialize the vector with 3 and all of them initialize with 100
    test_scores.at(0);               // this will be bounce checked
    cout << test_scores.size() << endl;

    vector<vector<int>> movie_r{
        {1, 2, 3, 4},
        {1, 2, 2, 3},
        {1, 3, 4, 5}};

    cout << movie_r.at(0).at(2);
}
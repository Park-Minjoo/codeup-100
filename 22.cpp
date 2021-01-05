#include <iostream>

using namespace std;

int main()
{
    char word[21];

    cin >> word;

    for (int i = 0; word[i] != 0; i++){
        cout << "'" << word[i] << "'" << endl;
    }
    return 0;
}
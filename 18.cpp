#include <iostream>

using namespace std;

int main()
{
    int l,r;
    cin >> l;
    cin.ignore(256, '-');
    cin >> r;

    cout.width(6); cout.fill('0');
    cout << l << r << endl;
    return 0;
}
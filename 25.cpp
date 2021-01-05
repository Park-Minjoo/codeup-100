#include <iostream>

using namespace std;

int main()
{
    int y, m, d;

    scanf ("%d.%d.%d", &y, &m, &d);
    printf("%02d-%02d-%04d\n", d, m, y);
    // cout << d << "-" << m << "-" << y << endl;
}
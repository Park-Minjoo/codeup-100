// 1046
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;
    float ave;

    cin >> a >> b >> c;
    cout << a+b+c << endl;
    
    ave = (float)(a+b+c) / 3;
    cout.precision(2);
    cout << ave << endl;
    
}
// 1082
#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> hex >> x;

    for(int i = 1; i <= 15; i++){
        cout << hex << x << "*" << i << "=" << hex << x*i << endl;
    }
} 

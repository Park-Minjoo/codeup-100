// 1080
#include <iostream>

using namespace std;

int main() {
    int n, i, sum = 0;
    cin >> n;

    for (i = 1; sum >= n; i++){
        sum = sum + i;
        cout << "sum: " << sum << endl;
    }
   cout << i << endl;
} 

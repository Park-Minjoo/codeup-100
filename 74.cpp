// 1078
#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    int i, n = 0;
    cin >> i;

    do{
        if(n%2==0) sum = sum + n;
        // cout << n << endl;
        n++;
    }while(n<=i);
       cout << sum << endl;     
} 

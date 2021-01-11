// 1080
#include <iostream>

using namespace std;

int main() {
    int n, i=1, sum = 0;
    cin >> n;
/*
    for (i = 0; sum <= n; i++){
        
        if (sum >= n) cout << i-1 << endl;
        sum += i;     
    } 
*/
  while(true){
      sum+=i;
      if(sum>=n){ 
        cout << i << endl;
        break;}
      else i++;
  }  
     
} 

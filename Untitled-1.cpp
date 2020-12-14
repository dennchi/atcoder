#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  
    for (long long i = N*(N-1)+1; i < 10000000000001; i = i+N*(N-1)) {
       for (long j = 2; j < N-1; j++) {
           if (i % j != 1) {
               break;
           }else if (j == N && i % j == 1) {
               cout << i <<endl;
               return 0;
    } 
       }
     
    }
  }
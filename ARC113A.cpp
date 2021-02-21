#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long K;
  cin >> K;

  long long count = 0;
  
   long long K_root = sqrt(K);


  for (long i = 1; i < K_root + 1; i++) {
      for (long j = i; j < K+1; j++) {
          if (i * j > K) {
              break;
          }
          for (long l = j; l < K+1; l++) {
              if(i*j*l <= K) {
                  if (i == j && j == l){
                      count += 1;
                  }else if (i == j || j == l) {
                      count += 3;    
                  }else{
                      count += 6;
                  } 
              }else{
                  break;
              }
      
          }
      
      
      }
      
  }

cout << count <<endl;

}
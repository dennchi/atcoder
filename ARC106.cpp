#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,M,L;
  cin >> N;

  long long counti,countj;
  counti = 1;
  countj = 1;
  
  if (N % 2 != 0) {
      cout << -1 <<endl;
  }else{
      for (long i = 1; i < N; i++) {
          M = N;
          counti *= 5;
          M -= counti;
          if (M > 0) {
              for (long j = 1; j < N; j++){
                  L = M;
                  countj *= 3;
                  L -= countj;
                  if (L == 0){
                      cout << j << " " << i <<endl;
                      return 0;
                  }else if (L < 0){
                      countj = 1;
                      break;
                  }
              }           
          }else{
              cout << -1 <<endl;
              return 0;
          }
      }
  }

}

   
    

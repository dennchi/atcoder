#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long N,K;
  cin >> N >> K;

  long A[N];
  for (long i = 0; i < N ; i++) {
    cin >> A[i];
  }
  
  long min_x,max_x;
  long B[N];

  for (long j = 0; j < K ; j++) {

  for (long i = 0; i < N ; i++) {
     min_x = i + 1 - A[i] - 0.5;
     max_x = i + 1 + A[i] + 0.5;
       
       for (long k = 0; k < N ; k++) {
           if (min_x <= k && max_x >= k){
               B[k] = B[k] + 1;
           }
       }
     }
      for (long l = 0; l < N ; l++){
         A[l] = B[l];
         B[l] = 0;
  }
  }

  for (long i = 0; i < N ; i++){
  cout << A[i] <<endl;
  }
}
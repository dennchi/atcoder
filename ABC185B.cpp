#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,M,T;
  cin >> N >> M >> T;

  long long A[M],B[M];
  for (long i = 0; i < M; i++) {
      cin >> A[i] >> B[i];

  }

  long long N_max = N;
  N = N - A[0];
  if (N <= 0) {
      cout << "No" <<endl;
      return 0;
  }else{
      for (long i = 0; i < M-1; i++) {
          N = N + B[i] - A[i];
          if (N > N_max) {
              N = N_max;
          }
          N = N - A[i+1] + B[i];
          if (N <= 0) {
              cout << "No" <<endl;
              return 0;
          }
      }
  }

  N = N + B[M-1] - A[M-1];
  if (N > N_max) {
      N = N_max;
  }
  N = N - T + B[M-1];
  if (N <= 0) {
              cout << "No" <<endl;
              return 0;
          }

  cout << "Yes" <<endl;
}
   
    

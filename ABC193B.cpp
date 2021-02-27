#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin >> N;

  long long A[N],P[N],X[N];
  for (long i = 0; i < N; i++) {
      cin >> A[i] >> P[i] >> X[i];
  }

  long long price = 2000000000;

  for (long i = 0; i < N; i++) {
      if (X[i] > A[i]) {
          price = min(price,P[i]); 
      }
  }
  
  if (price == 2000000000) {
    cout << -1 <<endl;      
  }else{
      cout << price <<endl;
  }
}
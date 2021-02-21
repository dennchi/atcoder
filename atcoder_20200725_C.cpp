#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,K;
  cin >> N >> K;

  long long A[N];
  
  for (long long i = 0; i < N ; i++) {
    cin >> A[i];
}

  vector<long long> S(N+1);
  long long count = 1;

  for (long long j = 0; j < K; j++){
        count = count * A[j];
  } 
  S.at(0) = count;
  
  for (long long i = 1; i < N-K+1; i++) {
     count = count * A[K+i-1] / A[i-1];
     S.at(i) = count;
        if(S.at(i-1) < S.at(i)) {
            cout << "Yes" <<endl;
        }else{
            cout << "No" <<endl;
        }
        
     }
  
}

#include <bits/stdc++.h>
#include <map>
using namespace std;
 
int main() {
  long long N,K;
  cin >> N >> K;
  
  long long A[N],B[N];
  map<long long, long long> mp;

  for (long i = 0; i < N; i++) {
    cin >> A[i] >> B[i];
    mp[A[i]] += B[i];
  }

  sort(A,A+N);

  if (A[0] > K) {
      cout << K <<endl;
      return 0;
  }

  K =  K - A[0] + mp[A[0]];

  if (N == 1) {
      cout << K + A[0] <<endl;
  }

  for (long i = 1; i < N; i++) {
    if (A[i] - A[i-1] == 0 && i != N-1) continue;
    if (A[i] - A[i-1] > K) {
        cout << K + A[i-1] <<endl;
        return 0;
    }else if(A[i] - A[i-1] != 0){
        K = K - (A[i]-A[i-1]) + mp[A[i]];
    }
    if (i == N-1) {
        cout << K + A[i] <<endl;
        return 0;
    }   
  }

}
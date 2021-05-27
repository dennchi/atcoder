#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin >> N;
  
  long long A[N],B[N],C[N];
  vector<long long> tmp(N+1,0);
  for (long long i = 0; i < N; i++) {
    cin >> A[i];
  }
  for (long long i = 0; i < N; i++) {
    cin >> B[i];
  }
  for (long long i = 0; i < N; i++) {
    cin >> C[i];
    tmp[B[C[i]]] += 1;
  }
  
  long long count = 0;
  for (long long i = 0; i < N; i++) {
      count += tmp[A[i]];
  }

  cout << count <<endl;

}
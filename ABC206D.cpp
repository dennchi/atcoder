#include <bits/stdc++.h>
#include <map>
using namespace std;
 
int main() {
  long long N;
  cin >> N;

  long long A[N];
  for (long i = 0; i < N; i++) {
    cin >> A[i];
  }

  long long count = 0;
  long long hani = N/2;
  for (long i = 0; i < hani; i++) {
      if (A[i] != A[N-i-1]){
          count += 1;
          long long tmp = A[i];
          for (long j = i; j < N-i-1; j++){
              if (A[j] == tmp){
                  A[j] = A[N-i-1];
              }
          }
      }

  }
  cout << count <<endl;
}
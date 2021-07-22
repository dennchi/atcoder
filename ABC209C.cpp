#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin >> N;

  long long C[N];
  long long mod = 1000000007;
  for (long long i = 0; i < N; i++) {
    cin >> C[i];
  }
  
  sort(C,C+N);

  long long count = 0;

  for(long long i = 0; i < N; i++){
    count *= (C[i] - i);
    count = count % mod; 
  }
  cout << count << endl;
}
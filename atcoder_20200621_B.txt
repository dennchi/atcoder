#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,K;
  cin >> N >> K;

  int p[N];
  
  for (int i = 0; i < N; i++) {
    cin >> p[i];
  }
  
  sort(p,p+N);

  int sum_p;
  sum_p = 0;

   for (int i = 0; i < K; i++) {
      sum_p += p[i];
  }
  cout << sum_p <<endl;
}
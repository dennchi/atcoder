#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,X;
  cin >> N >> X;

  long long V[N],P[N];
  for (long i = 0; i < N; i++) {
      cin >> V[i] >> P[i];
  }
  
  long long sum = 0;

  for (long i = 0; i < N; i++) {
      sum += V[i] * P[i];
      if (sum > 100 * X) {
          cout << i+1 <<endl;
          return 0;
      }
  }

cout << -1 <<endl;

}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,S,D;
  cin >> N >> S >> D;

  long long X[N],Y[N];
  for (long i = 0; i < N; i++) {
      cin >> X[i] >> Y[i];
  }

  for (long i = 0; i < N; i++) {
    if (X[i] < S && Y[i] > D) {
          cout << "Yes" <<endl;
          return 0;
      }
  }

cout << "No" <<endl;

}
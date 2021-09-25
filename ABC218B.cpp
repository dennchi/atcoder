#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N = 26;
  string S = "abcdefghijklmnopqrstuvwxyz";

  long long P[N];
  for (long long i = 0; i < N; i++) {
    cin >> P[i];
    cout << S[P[i]-1];
  }
}
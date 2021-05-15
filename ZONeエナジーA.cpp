#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin >> S;

  long long count = 0;

  for (long i = 0; i < S.length()-3; i++) {
      if (S[i] == 'Z' && S[i+1] == 'O' && S[i+2] == 'N' && S[i+3] == 'e') {
          count += 1;
      }
  }

    cout << count <<endl;
}
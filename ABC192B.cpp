#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin >> S;

  
  for (long i = 1; i < S.length()+1; i++) {
      if (i % 2 != 0 && isupper(S[i-1])) {
          cout << "No" <<endl;
          return 0;
      }else if (i % 2 == 0 && islower(S[i-1])) {
          cout << "No" <<endl;
          return 0;
      }
  }

  cout << "Yes" <<endl;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S,T;
  cin >> S >> T;
  int n;
  n = S.length();

  for (int i = 0; i < n; i++) {
    if(S[i]!=T[i]){
        cout << "No" <<endl;
        n = 100;
        break;
    }
  }
  
    if (n != 100){
        cout << "Yes" << endl;
    }
}
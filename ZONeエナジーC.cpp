#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin >> S;

  string T = "";

  if (S == "R") {
      cout << "" <<endl;
      return 0;
  }

  for (long long i = 0; i < S.length(); i++) {
      if (S[i] != 'R') {
          T += S[i];
      }else{
          reverse(T.begin(), T.end());
      }
  }

  for (long long i = 0; i < T.length()-1; i++) {
      if (T[i] == T[i+1]) {
          T.erase(T.begin()+i+1);
          T.erase(T.begin()+i);
          if (i >= 2){
            i = i - 2;    
          }else{
            i = 0;
          }
          
      }
  }
  
    if (T[0] == T[1]) {
    T.erase(T.begin()+1);
    T.erase(T.begin());
  }
  
    cout << T <<endl;
}
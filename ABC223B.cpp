#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin >> S;

  string S_max,S_min;
  S_max = S;
  S_min = S;
  
  long long len = S.length();
  
  for (long long i = 0; i < len; i++) {
    char a = S[len-1];
    for (long long j = 0; j < len-1; j++) {
         S[len-1-j] = S[len-2-j];
    }
    S[0] = a;

    if (S_max < S){
        S_max = S;
    }
    if (S_min > S){
        S_min = S;
    }    
  }
  
  
  cout << S_min << endl;
  cout << S_max << endl;
}
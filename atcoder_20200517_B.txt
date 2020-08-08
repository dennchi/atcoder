#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int K,L;
  cin >> K;
  string S;
  cin >> S;

  string A;  
  L = S.length();
    
    if(L <= K){
        cout << S << endl;
    }else{
        for (int i = 0; i < K; i++) {
        A[i] = S[i];
        }
        A = A.append("...");
        cout << A << endl;  
    }
}
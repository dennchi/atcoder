#include <bits/stdc++.h>
using namespace std;
 
int main() {
  char S[100];
  cin >> S;

  int N;
  N = strlen(S);

  string A;
  A = "Great";

  for (int i = 0; i < (N-1)/2; i++) {
    if(S[i]!=S[N-1-i] || S[i]!=S[(N-1)/2-1-i] || S[(N+3)/2-1+i]!=S[N-1-i]){
        cout << "No" <<endl;
        A = "Bad";
        break;
    }
    }
    if(A=="Great"){
        cout << "Yes" <<endl;
    }
            
  }

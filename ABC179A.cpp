#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin >> S;
  int L;
  L = S.length();
  
  if (S[L-1] == 's'){
    S = S + "es";
     cout << S <<endl;    
  }else{
    S = S + "s";
      cout << S <<endl;
  }


}

   
    

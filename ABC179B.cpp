#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;

  int D1[N],D2[N];
  for (long i = 0; i < N; i++) {
      cin >> D1[i] >> D2[i];
  }
  
  for (long i = 0; i < N-2; i++) {
      if(D1[i] == D2[i] && D1[i+1] == D2[i+1] && D1[i+2] == D2[i+2]) {
          cout << "Yes" <<endl;
          exit(0);
      }
  }

cout << "No" <<endl;

  
  

}

   
    

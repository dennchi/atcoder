#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin >> N;

  string S[N];
  for (long i = 0; i < N; i++) {
      cin >> S[i];
      if (S[i].at(0) == '!'){
          S[i] = S[i].erase(0,1);
      }
  }
  
  sort(S.begin(), S.end());

  for (long i = 0; i < N-1; i++) {
      for (long j = i+1; j < N; j++) {
          if(S[i] == S[j]){
              cout << S[i] <<endl;
              return 0;
          }
      }
  }

  
  cout << "satisfiable" <<endl;
  
}
   
    

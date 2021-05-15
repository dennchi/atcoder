#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string N;
  cin >> N;

  long long count = 0;

  for (long i = N.length()-1; i >= 0; i--) {
      if (N[i] == 0) {
          count += 1;
      }else{
          break;
      }    
  }
  for (long i = 0; i < count; i++) {
      N.insert(0,"0");
  }

  for (long i = 0; i < N.length(); i++) {
      if(N[i] != N[N.length() - 1 - i]) {
          cout << "No" <<endl;
          return 0;
      }
  }  

    cout << "Yes" <<endl;
}
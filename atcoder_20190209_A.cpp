#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S,T;
  int A,B;
  string U;
  
  cin >> S >> T; 
  cin >> A >> B;
  cin >> U;
  if (S == U) {
      A = A - 1;
  }else{
      B = B - 1;
   }
  
  cout << A << " " << B << endl;
}
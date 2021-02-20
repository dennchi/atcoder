#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long A,B,C;
  cin >> A >> B >> C;

  if (C == 0) {
      if (A > B) {
          cout << "Takahashi" <<endl;
      }else{
          cout << "Aoki" <<endl;
      }
  }else{
    if (B > A) {
          cout << "Aoki" <<endl;
      }else{
          cout << "Takahashi" <<endl;
      }    
  }

}
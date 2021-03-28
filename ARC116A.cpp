#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long T;
  cin >> T;

  long long c[T];
  for (long i = 0; i < T; i++) {
      cin >> c[i];
      if (c[i] % 4 == 1 || c[i] % 4 == 3) {
          cout << "Odd" <<endl;
      }else if (c[i] % 4 == 2) {
          cout << "Same" <<endl;
      }else{
          cout << "Even" <<endl;
      }
  }

}
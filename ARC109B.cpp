#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long n;
  cin >> n;

  for (long long i = 1; i < n+10; i++) {
      if(i * (i+1) / 2 - 1 <= n && n < (i+1) * (i+2) /2 - 1) {
          cout << n - i + 1 <<endl;
          return 0;
      }
  }
  
}

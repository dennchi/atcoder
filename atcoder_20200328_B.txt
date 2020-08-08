#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long X;
  cin >> X;

  long a,b,ans;
  a = X / 500;
  b = X % 500;
  b = b / 5;

  ans = a * 1000 + b * 5;

  cout << ans <<endl;
  return 0;  
  }

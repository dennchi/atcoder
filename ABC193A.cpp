#include <bits/stdc++.h>
using namespace std;
 
int main() {
  double A,B;
  cin >> A >> B;

  double count = 0;

  count = 100 - (B / A * 100);



  printf("%8.100f", count);
}
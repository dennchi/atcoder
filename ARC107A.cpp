#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long A,B,C;
  cin >> A >> B >> C;
  
  long long count = 0;
  long long count_A,count_B,count_C;
  
  count_A = (A * (A + 1) / 2) % 998244353;
  count_B = (B * (B + 1) / 2) % 998244353;
  count_C = (C * (C + 1) / 2) % 998244353;

  count = (count_A * count_B) % 998244353;
  count = (count * count_C) % 998244353;

  cout << count <<endl;
}
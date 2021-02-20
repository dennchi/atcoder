#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string N;
  long long K;
  cin >> N >> K;
  
  int an = atoi(N.c_str()); 
  
  for (long i = 0; i < K; i++) {
  string f2 = N;
  sort(f2.begin(), f2.end());

  string f1 = N;
  sort(f1.begin(), f1.end(), greater<int>());

  int f1_num = atoi(f1.c_str());
  int f2_num = atoi(f2.c_str());
  
  an = f1_num - f2_num;
  N = to_string(an);
  }

  cout << an <<endl;
}
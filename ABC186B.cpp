#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long H,W;
  cin >> H >> W;

  long long A[H][W];
  long long min_A = 10000;
  long long count = 0;
  for (long i = 0; i < H; i++) {
      for (long j = 0; j < W; j++) {
          cin >> A[i][j];
          min_A = min(min_A,A[i][j]); 
      }
  }

    for (long i = 0; i < H; i++) {
      for (long j = 0; j < W; j++) {
          count += A[i][j] - min_A; 
      }
  }

  cout << count <<endl;
}
   
    

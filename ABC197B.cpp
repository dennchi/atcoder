#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long H,W,X,Y;
  cin >> H >> W >> X >> Y;

  vector<string> S(H);
  string tmp;
  for (long i = 0; i < H; i++) {
      cin >> tmp;
      S[i] = tmp;
  }
  
  long long count = 0;

  for (long i = Y; i < W; i++) {
      if (S[X-1][i] == '.') {
          count += 1;
      }else{
          break;
      }
  }
  for (long i = Y-1; i >= 0; i--) {
      if (S[X-1][i] == '.') {
          count += 1;
      }else{
          break;
      }
  }
  for (long i = X; i < H; i++) {
      if (S[i][Y-1] == '.') {
          count += 1;
      }else{
          break;
      }
  }
  for (long i = X-1; i >= 0; i--) {
      if (S[i][Y-1] == '.') {
          count += 1;
      }else{
          break;
      }
  }  

  cout << count-1 <<endl;
}
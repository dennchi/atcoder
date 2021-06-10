#include <bits/stdc++.h>
#include <map>
using namespace std;

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}
 
int main() {
  long long N;
  cin >> N;
  
  long long a[N],b[N],c[N];

  for (long i = 0; i < N; i++) {
    cin >> a[i] >> b[i] >> c[i];
  }

  long long dp[1000010][3];

  for (long i = 0; i < N; i++) {
      for (long j = 0; j < 3; j++) {
          if (j == 0) {
            chmax(dp[i + 1][2], dp[i][1] + c[i]);
            chmax(dp[i + 1][1], dp[i][2] + b[i]);
          }else if (j == 1) {
            chmax(dp[i + 1][2], dp[i][0] + c[i]);
            chmax(dp[i + 1][0], dp[i][2] + a[i]);
          }else{
            chmax(dp[i + 1][0], dp[i][1] + a[i]);
            chmax(dp[i + 1][1], dp[i][0] + b[i]);
          }
      }
  }
  long long res = 0;
  for (int j = 0; j < 3; ++j) chmax(res, dp[N][j]);
  cout << res << endl;

}
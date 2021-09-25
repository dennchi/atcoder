#include <bits/stdc++.h>
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
  int N,W;
  cin >> N >> W;

  vector<pair<int,int>> p;
  for (long long i = 0; i < N; i++) {
    int w,v;
    cin >> w >> v;
    p.push_back({w,v});
  }

  long long dp[101][201010];

  for (long long i = 0; i < N; i++) {
      for (long long tot = 0; tot < W; tot++) {
        chmax(dp[i + 1][tot], dp[i][tot]);
        chmax(dp[i + 1][tot + p[i].first], dp[i][tot] + p[i].second);
      }
  }

  long long ans = 0;
  for (long long tot = 0; tot < W+1; tot++) {
      chmax(ans,dp[N][tot]);
  }
  cout << ans <<endl;
}
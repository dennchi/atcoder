#include <bits/stdc++.h>
#include <map>
using namespace std;
 
int main() {
  long long N,K;
  cin >> N >> K;

  long long c[N];
  map<long long, long long> mp;
  long long count = 0;
  long long count_max = 0;

  for (long long i = 0; i < N; i++) {
    cin >> c[i];
    if (i < K) {
        mp[c[i]] += 1;
        if (mp[c[i]] == 1) {
            count += 1;
        }
    }
  }

  count_max = count;

  for(long long i = K; i < N ; i++){
      mp[c[i-K]] -= 1;
      if (mp[c[i-K]] == 0) {
          count -= 1;
      }
      mp[c[i]] += 1;
      if (mp[c[i]] == 1) {
          count += 1;
      }

      count_max = max(count,count_max);
  }
  cout << count_max << endl;
}
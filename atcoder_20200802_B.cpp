#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,D,dp;
  long long count = 0;
  cin >> N >> D;
  vector<long long> X(N),Y(N);
  vector<double> d(N);
  for (long long i = 0; i < N; i++) {
    cin >> X.at(i) >> Y.at(i);
    dp = X.at(i)*X.at(i) + Y.at(i)*Y.at(i);
    d.at(i) = sqrt(dp);
    if(d.at(i) <= D){
        count += 1;
    }
  }

    cout << count <<endl;

}
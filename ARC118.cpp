#include <bits/stdc++.h>
using namespace std;
 
int main() {
  double t;
  long long N;
  cin >> t >> N;

  long long num = 0;
  long long count_pre = floor((100 + t) / 100);
  long long count = 0;
  long long ans = 0;
  for (long long i = 2; i < 10000000000; i++) {
    count = floor((100 + t) * i / 100);
    N -= (count - count_pre -1);
    if (N <= 0){
        ans = i + N -1;
        cout << ans <<endl;
        return 0;
    }else{
        count_pre = count;
    }

  }
  

}
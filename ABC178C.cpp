#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin >> N;
  
  long long ans1,ans2,ans3,ans,tmp1,tmp2,tmp3;
  tmp1 = 1;
  tmp2 = 1;
  tmp3 = 1;

  for (long i = 0; i < N; i++) {
      tmp1 = tmp1 * 8 % 1000000007;
      tmp2 = tmp2 * 9 % 1000000007;
      tmp3 = tmp3 * 10 % 1000000007; 
  }

  ans1 = tmp1;

  ans2 = (tmp2 - tmp1) % 1000000007;
  ans2 = abs(ans2);

  ans3 = tmp3;

  ans = (ans3 - ans1 - ans2 - ans2) % 1000000007;

  
  cout << ans <<endl;
}

   
    

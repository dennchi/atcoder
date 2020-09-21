#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long X,K,D;
  cin >> X >> K >> D;
 
  X = abs(X);
  double count_pre;
  long long count,ans;
  count_pre = (double)X/D;
  count = ceil(count_pre);

  if (X - K * D >= 0){
      cout << X - K * D <<endl;
  }else if ((K -count) % 2 == 0 ){
      ans = X - count * D;
      ans = abs(ans);
      cout << ans <<endl;
  }else{
      ans = X - count * D + D;
      cout << ans <<endl;
  }
 
  
      
}
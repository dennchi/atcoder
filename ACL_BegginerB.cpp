#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long A,B,C,D;
  cin >> A >> B >> C >> D;
  
  if ((A <= C && B >= C) || (A >= C && A <= D)) {
      cout << "Yes" <<endl;
  }else{
      cout << "No" <<endl;
  }
  
}

   
    

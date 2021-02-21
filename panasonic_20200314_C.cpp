#include <bits/stdc++.h>
using namespace std;
 
int main() {
  double a,b,c;
  cin >> a >> b >> c;
  double ab;
  ab = sqrt(a*b);
  
  double pre;
  pre = c - a - b - 2*ab; 
  
  if (pre > 0){
      cout << "Yes" <<endl;
  }else{
      cout << "No" <<endl;
  }
}
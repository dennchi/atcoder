#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int a,b,x,y;
  cin >> a >> b >> x >> y;

  int count = 0;
  
  if (a > b) {
      if(2 * x <= y) {
          count = (a - b - 1) * 2 * x + x; 
      }else{
          count = x + (a - b - 1) * y;
      }

  }else{
      if(2 * x <= y) {
          count = (b - a) * 2 * x + x;
      }else{
          count = x + (b - a) * y;
      }
  }  

  cout << count <<endl;
}

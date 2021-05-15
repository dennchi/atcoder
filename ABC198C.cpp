#include <bits/stdc++.h>
using namespace std;
 
int main() {
  double R,X,Y;
  cin >> R >> X >> Y;

  double d = 0;
  double step = 0;
  
  d = sqrt(X*X + Y*Y);
  if (d >= R) {
    step = d/R;
    step = ceil(step);
  }else{
    step = 2;
  }

  cout << step <<endl;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  double A,B,H,M;
  cin >> A >> B >> H >> M;
  
  double radA,radB,rad;

  radA = 30 * H + 0.5 * M;
  radB = 6 * M;
  rad = fabs(radB - radA) / 180;

  double length_A;
  length_A = pow(A,2) + pow(B,2) - 2*A*B*cos(rad*3.1415926535/180);
  length_A = pow(length_A,0.5);

        cout << length_A << endl;  
}
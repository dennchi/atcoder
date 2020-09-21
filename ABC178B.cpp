#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long a,b,c,d;
  cin >> a >> b >> c >> d;
  long long ac,ad,bc,bd;

  ac = a * c;
  ad = a * d;
  bc = b * c;
  bd = b * d;

  cout << max({ac,ad,bc,bd}) <<endl;
}

   
    

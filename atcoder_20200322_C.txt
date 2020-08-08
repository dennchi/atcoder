#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int L;
  cin >> L;

  double a,b,c,max;
  double a2,b2,c2;
  max = 0;

  for (int i = 0; i < 10000000; i++) {
    a = rand();
    b = rand();
    c = rand();

    a2 = a * L / (a+b+c);
    b2 = b * L / (a+b+c);
    c2 = c * L / (a+b+c);
    
    double V;
    V = a2 * b2 * c2;

    if(max < V){
        max = V;
    }
  }
    printf("%f"  , max); 

}

36926032.260188
36926035.849220
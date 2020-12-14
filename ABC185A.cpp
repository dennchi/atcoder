#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A1,A2,A3,A4;
  cin >> A1 >> A2 >> A3 >> A4;
  
  int min_A;
  min_A = min(A1,A2);
  min_A = min(min_A,A3);
  min_A = min(min_A,A4);

  cout << min_A <<endl;
}

   
    

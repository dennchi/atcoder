#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long N,A,B;
  cin >> N >> A >> B;
  double M;
  M = N / (A+B);
  M = floor(M);

  long C;
  C = N - M * (A+B);
  long A1,A2;
  A1 = (M+1) * A;
  A2 = C + M * A;
  if(C >= A){
      cout << A1 << endl;
  }else{
      cout << A2 << endl;
  }  
}
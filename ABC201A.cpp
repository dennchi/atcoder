#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long A[3];
  cin >> A[0] >> A[1] >> A[2];

  sort(A,A+3);

  if ((A[1] - A[0]) == (A[2] - A[1])) {
      cout << "Yes" <<endl;
  }else{
      cout << "No" <<endl;
  }
  
}
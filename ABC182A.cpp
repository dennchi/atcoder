#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  
  int A[N];
  int M = 0;
  int GCD = 0;
  int GCD_MAX =0;
  int i_max = 0;

  for (long i = 0; i < N; i++) {
      cin >> A[i];
  }
  
  for (long j = 2; j < 1001 ; j++) {
      for (long k = 0; k < N ; k++){
        if (A[k] % j == 0) {
            GCD += 1;
        }
      }
      if (GCD > GCD_MAX){
        i_max = j;
        GCD_MAX = GCD;    
      }
      GCD = 0;   
  }
  
cout << i_max <<endl;

}

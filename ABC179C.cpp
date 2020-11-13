#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin >> N;

  long long count = 0;
  long long cul = 0;

  for (long i = 1; i < N; i++){
      cul = N / i;
      if (N != cul * i) {
         count += cul;
      }else{
         count += cul - 1;
      }
     
  }
cout << count <<endl;
  }

    

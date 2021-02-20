#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long A;
  cin >> A;

  long long sum_digit = 0;
  long long dig = 0;

  while(A){
    dig = A % 10;
    sum_digit = sum_digit + dig;
    A = A / 10;
  }

}
   
    

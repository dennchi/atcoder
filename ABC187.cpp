#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long A,B;
  cin >> A >> B;

  long long sum_A,sum_B;
  sum_A = 0;
  sum_B = 0;
  long long dig = 0;

  while(A){
    dig = A % 10;
    sum_A = sum_A + dig;
    A = A / 10;
  }
  
  while(B){
    dig = B % 10;
    sum_B = sum_B + dig;
    B = B / 10;
  }

  if(sum_A >= sum_B){
      cout << sum_A <<endl;
  }else{
      cout << sum_B <<endl;
  }
}
   
    

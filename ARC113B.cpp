#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long A,B,C;
  cin >> A >> B >> C;
  
  int digit_lower_A = A % 10;
  int digit_lower_B = B % 100;

  long long mul_B = 0;

  if (digit_lower_B == 10 && C == 1){
      mul_B = 2;
  }else{
 
  int mul_C = C % 4;
  if (mul_C == 0) {
      mul_C = 4;
  }
  mul_B = pow(digit_lower_B,mul_C);
  mul_B = mul_B % 4;
  }

  int calc = pow(digit_lower_A,mul_B+4);
  calc = calc % 10;  
  cout << calc <<endl;
 
}
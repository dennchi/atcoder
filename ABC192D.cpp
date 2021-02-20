#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string X;
  long long M;
  cin >> X >> M;  

  int maxdigit = 0;
  int dig = 0;
 
  for (int i = 0; i < X.length(); i++) {
        char c = X[i];
        dig = c - '0';
        if (dig > maxdigit){
            maxdigit = dig;
        }
      }

  int digit = 0;
  long long count = 0;
  long long sum_num = 0;

  if (X.length() == 1) {
     if (M >= maxdigit) {
         cout << 1 <<endl;
         return 0;
     }else{
         cout << 0 <<endl;
         return 0;
     } 
  }

  for (long i = maxdigit+1; i < M+1; i++) {
      for (long j = 0; j < X.length(); j++) {
        char c = X[j];
        digit = c - '0';
        count += digit * pow(i,j);
      }
    if (count > M) {
        cout << sum_num <<endl;
        return 0; 
    }else{
        count = 0;
        sum_num += 1;
    }   
  }

}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string X;
  long long M;
  cin >> X >> M;  

  long long A = X;
  long long maxdigit = 0;
  long long dig = 0;

  while(A){
    dig = A % 10;
    if (maxdigit < dig){
        maxdigit = dig;
    }
    A = A / 10;
  }

  int digit = 0;
  long long count = 0;
  long long sum_num = 0;

  for (long i = maxdigit+1; i < M; i++) {
      for (int j = 0; j < X.length(); j++) {
        digit = atoi(X[j].c_str());
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
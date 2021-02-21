#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A,B,C,K;
  cin >> A >> B >> C >> K;
  

  for (int i = 0; i < K+1 ; i++) {
  if (A < B && B < C) {
      cout << "Yes" <<endl;
      break;
  }else if (i == K){
      cout << "No" <<endl;
  }else if (A >= B) {
      B = B * 2;
  }else if (B >= C) {
      C = C * 2;
  }
  }

}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long N,K;
  cin >> N >> K;
  long x,x_alt;

  if(N > K){
      x = N % K;
  }else{
      x = N;
  }

  x_alt = K - x;

  if(x < x_alt){
    cout << x <<endl;
  }else{
    cout << x_alt <<endl; 
  }
}
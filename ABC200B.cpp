#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,K;
  cin >> N >> K;

  for (long i = 0; i < K; i++) {
    if (N % 200 == 0){
        N = N / 200;
    }else{
        N = N * 1000 + 200;
    } 
  }

  cout << N <<endl;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  long long K;
  cin >> N >> K;
  int A[N];

  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  int position = 1;
  long long P,B[K];
  
  for (long long j = 0; j < K; j++) {
    if(j >= 1 && position == 1){
      P = j;
      break;
    }else{
      B[j] = position;
      position = A[position];
  }
  }
  int Q;
  Q = K % P;
  if (Q == 0){
      position = B[P-1];
  }else{
      position = B[Q-1];
  } 
  cout << position <<endl;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,M,X;
  cin >> N >> M >> X;
  int C[N],A[N][M];

  for (int i = 0; i < N; i++) {
    cin >> C[i];
    for (int j = 0; j < M; j++){
        cin >> A[i][j];
    }
  }

  if(K <= A){
        cout << K <<endl;
    }else if(K <= A+B){
        cout << A <<endl;
    }else{
        cout << A - (K-A-B) <<endl;
    }
  }
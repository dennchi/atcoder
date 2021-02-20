#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,M;
  cin >> N >> M;

  int A[M],B[M];
  for (long i = 0; i < M; i++) {
      cin >> A[i] >> B[i];
  }

  int K;
  cin >> K;

  int C[K],D[K];
  for (long i = 0; i < K; i++) {
      cin >> C[i] >> D[i];
  }

  int dish[N];
  for (long i = 0; i < N; i++) {
      dish[i] = 0;
  }

  int sum_M = 0;
  int max_sum_M =0;

  for (int bit = 0; bit < (1<<K); bit++) {
        for (int i = 0; i < K; i++) {
            if (bit & (1<<i)) {
               dish[C[i]-1] += 1;
            }else{
                dish[D[i]-1] += 1;
            }
        }
        for (long j = 0; j < M; j++) {
            if (dish[A[j]-1] >= 1 && dish[B[j]-1] >= 1) {
                sum_M += 1;
            }
        }
        max_sum_M = max(max_sum_M,sum_M);
        sum_M = 0;
        for (long l = 0; l < N; l++) {
            dish[l] = 0;
         }
  }        

cout << max_sum_M <<endl;

}
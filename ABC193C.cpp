#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin >> N;

  int A[N];
  for (long i = 0; i < N; i++) {
    A[i] = 0;
  }

  
  long long count = 0;
  long long pow_tmp = 0;

    for (long long i = 2; i < sqrt(N)+1; i++){
        pow_tmp = i;
        for (long long k = 2; k < N; k++) {
            pow_tmp *= i;
            if (pow_tmp > N){
                break;
            }else if (pow_tmp <= N && A[pow_tmp-1] != 1) {
                A[pow_tmp-1] = 1;
                count += 1;
    
        }
    }
    }
  cout << N - count <<endl;
}
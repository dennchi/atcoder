#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin >> N;

  long long A[N];
  for (long long i = 0; i < N; i++) {
    cin >> A[i];
    A[i] = A[i] % 200;
  }
  
  sort(A, A+N);

  long long count = 0;
  long long count_tmp = 0;

  for (long long i = 0; i < 200; i++) {
    for (long long j = 0; j < N; j++) {
       if (A[j] == i) {
           count_tmp += 1;
       }
    }
    count += (count_tmp * (count_tmp - 1) / 2);
    count_tmp = 0;    
  }

  cout << count <<endl;
}
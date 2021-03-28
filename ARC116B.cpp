#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin >> N;

  long long A[N];
  long long count = 0;
  for (long i = 0; i < N; i++) {
      cin >> A[i];
      count += (A[i] * A[i]) % 998244353;
      count = count % 998244353;
  }
  
  sort(A, A+N);
  long long tmp = 1;

  for (long i = 0; i < N-1; i++) {
      tmp = 1;
      for (long j = i+1; j < N; j++) {
            count += (A[i] * A[j] * tmp) % 998244353;
            count = count % 998244353;
            tmp *= 2;
            tmp = tmp % 998244353;
  }
}
cout << count <<endl;

}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin >> N;

  long long A[N];
  for (long i = 0; i < N; i++) {
      cin >> A[i];
  }
  
  long long min_A = 10000000;
  long long eat = 0;
  long long max_eat = 0;

  for (long i = 0; i < N; i++) {
      for (long j = i; j < N; j++) {
          min_A = min(min_A,A[j]);
          eat = min_A * (j - i + 1);
          max_eat = max(max_eat,eat);
      }
      min_A = 10000000;
  }

 
cout << max_eat <<endl;

}
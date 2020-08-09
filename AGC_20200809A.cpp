#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin >> N;

  long double A[N];

  for (long long i = 0; i < N; i++) {
    scanf("%Lf", &A[i]);
    A[i] = A[i] * pow(10,9);
  }
  
  long double result;
  long long count = 0;

  for (long long i = 0; i < N-1; i++) {
      for (long long j = i+1; j < N; j++) {
          result = A[i] * A[j];
          result = result / pow(10,18);
          if (ceil(result) == floor(result)) {
              count += 1;
          }
      }
  }

    cout << count <<endl; 
}
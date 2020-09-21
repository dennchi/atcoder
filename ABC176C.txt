#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin >> N;
  
  long long A[N];

  for (long i = 0; i < N; i++) {
      cin >> A[i]; 
  }
  
  long long count = 0;

  for (long i = 0; i < N-1; i++) {
      if (A[i+1] < A[i]){
          count += (A[i] - A[i+1]); 
          A[i+1] = A[i];
      } 
  }
 
  cout << count <<endl;
      
}
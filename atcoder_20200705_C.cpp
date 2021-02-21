#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long N;
  cin >> N;

  vector<long> A(N);
  for (long i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  
  sort(A.begin(), A.end());
  reverse(A.begin(), A.end());

  long kokochi;
  kokochi = 0;

  for (long j = 0; j < N-1; j++) {
        kokochi += A[j];
    }
    
    cout << kokochi <<endl;

  
}
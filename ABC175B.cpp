#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long N;
  cin >> N;

  long L[N];
  for (long i = 0; i < N; i++) {
      cin >> L[i];
  }
  
  long count = 0;

  for (long i = 0; i < N-2; i++) {
      for (long j = i + 1; j < N-1; j++){
          for (long k = j + 1; k < N; k++){
            if (L[i] + L[j] > L[k] && L[j] + L[k] > L[i] && L[k] + L[i] > L[j] && L[i] != L[j] && L[j] != L[k] && L[k] != L[i]){
                count += 1;
            }  
          }
      }
  }
  cout << count <<endl;
}

   
    

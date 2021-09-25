#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin >> N;
  
  long long S[N],T[N];
  for (long i = 0; i < N; i++) {
    cin >> S[i];
  }
  for (long i = 0; i < N; i++) {
    cin >> T[i];
  }

  long long count = 0;

  for (long long i = 0; i < 101; i++){
    for (long long j = 0; j < 101; j++){
        for (long long k = 0; k < 101; k++){
            if (i + j + k <= S && i * j * k <= T){
                count += 1;
            }
        }
    }      
  }

  cout << count <<endl;
}
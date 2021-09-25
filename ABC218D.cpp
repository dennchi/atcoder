#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin >> N;

  long long x[N],y[N];
  for (long long i = 0; i < N; i++) {
    cin >> x[i] >> y[i];
  }

  long long count = 0;

  for(long long i = 0; i < N-3; i++){
    for(long long j = i+1; j < N-2; j++){
      for(long long k = j+1; k < N-1; k++){
        if ((x[i] == x[j] || x[i] == x[k] || x[j] == x[k]) && (y[i] == y[j] || y[i] == y[k] || y[j] == y[k])){
        for(long long l = k+1; l < N; l++){
          if((x[i] == x[j] && x[k] == x[l] && x[i] != x[k]) || (x[i] == x[k] && x[j] == x[l] && x[i] != x[j]) || (x[i] == x[l] && x[j] == x[k] && x[i] != x[j])){
            if ((y[i] == y[j] && y[k] == y[l] && y[i] != y[k]) || (y[i] == y[k] && y[j] == y[l] && y[i] != y[j]) || (y[i] == y[l] && y[j] == y[k] && y[i] != y[j])){
              count += 1;
            }
          }
        }
        }
      }  
    }
  }
  cout << count << endl;
}
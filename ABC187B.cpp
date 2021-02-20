#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin >> N;

  double x[N],y[N];
  for (long i = 0; i < N; i++) {
      cin >> x[i] >> y[i];
  }

  double t = 0;
  long long count = 0;

  for (long i = 0; i < N-1; i++) {
      for (long j = i+1; j < N; j++) {
          t = (y[i] - y[j]) / (x[i] - x[j]);
          if(t <= 1 && t >= -1) {
              count += 1;
          }
          
      }
  }
  
  cout << count <<endl;
  
}
   
    

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  double D,H;
  cin >> N >> D >> H;

  double d[N],h[N];
  for (long i = 0; i < N; i++) {
      cin >> d[i] >> h[i];
  }

  double high = 0;
  double katamuki = H/D;
  
    for (long i = 0; i < N; i++) {
        if(katamuki * d[i] + high < h[i]){
            break;
        }else if (i == N - 1){
            cout << high << endl;
            return 0;
        }    
    }
  
  
  for (long i = 0; i < N; i++) {
      katamuki = (H-h[i])/(D-d[i]);
      high = H - katamuki * D;
    for (long i = 0; i < N; i++) {
        if(katamuki * d[i] + high < h[i]){
            break;
        }else if (i == N - 1){
            printf("%12.10f", high);
            return 0;
        }    
    }
  }
}
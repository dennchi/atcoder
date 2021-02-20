#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long T;
  cin >> T;

  long long L[T],R[T];
  for (long i = 0; i < T; i++) {
      cin >> L[i] >> R[i];
  }

  long long count = 0;

  for (long i = 0; i < T; i++) {
    if (R[i] - 2*L[i] >= 0) {
        count = (R[i] - 2*L[i] + 1) * (R[i] - 2*L[i] + 2) / 2;
        cout << count <<endl; 
  }else{
      cout << 0 <<endl;
  }
  

}
}
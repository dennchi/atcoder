#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int64_t N;
  cin >> N;

  long long count = 0;

  for (int64_t n = 1; n < 2000000 ; n++) {
    if ((2*N - n*(n-1)) > 0 && (2*N - n*(n-1)) % (2*n) == 0){
        count += 2;
    }
  }

cout << count <<endl;

}
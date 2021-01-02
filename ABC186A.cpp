#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,W;
  cin >> N >> W;

  long long count = 0;

  while (N < W) {
      N = N - W;
      count += 1;
  }

  cout << count <<endl;
}
   
    

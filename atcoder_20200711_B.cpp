#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long N;
  cin >> N;

  vector<long> a(N);
  for (long i = 0; i < N; i++) {
    cin >> a.at(i);
  }
 
  long count;
  count = 0;

  for (long i = 0; i < N; i++) {
    if ((i + 1) % 2 != 0 && a[i] % 2 != 0){
        count += 1;
    }
  }
     
    cout << count <<endl;
}
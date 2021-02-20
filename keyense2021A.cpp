#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin >> N;

  long long a[N],b[N];
  for (long long i = 0; i < N; i++) {
      cin >> a[i];
  }

  for (long long i = 0; i < N; i++) {
      cin >> b[i];
  }
  
  long long count = 0;
  long long count_max = 0;
  long long a_max = 0;

  for (long long i = 0; i < N; i++) {
      a_max = max(a_max,a[i]);
      count = a_max * b[i];
      count_max = max(count,count_max);
      cout << count_max <<endl;
      
  }

}

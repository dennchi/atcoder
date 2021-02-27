#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,X;
  cin >> N >> X;

  long long x[N];
  for (long i = 0; i < N; i++) {
      cin >> x[i];
  }

  long long sum = 0;
  long long count = 0;
  long long count_max = 0;
  long long sum_max = 0;

  for (int bit = 0; bit < (1<<N); bit++) {
    for (int i = 0; i < N; ++i) {
        if (bit & (1<<i)) {
             count += 1;
             sum += x[i];
        }
    }
    if (count_max < count && sum <= X) {
        count_max = count;
        sum_max = sum;
    }else if (count_max == count && sum <= X) {
        sum_max = max(sum_max,sum);
    }
    sum = 0;
    count = 0;
  }
  
  cout << X - sum_max <<endl;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin >> N;

  int d[N];
  for (long i = 0; i < N; i++) {
      cin >> d[i];
  }
  
  int holidays = 0;
  int weekdays = 0;
  long long term = 0;
  long long max_term = 0;

  for (long i = 0; i < N-6; i++) {
      for (long j = 0; j < 7; j++) {
        if (d[i+j] == 1) {
          weekdays += 1;
        }else{
          holidays += 1;
        }
      }
      if (holidays >= 2 && term == 0) {
          term = 7;
      }else if (holidays >= 2 && term != 0) {
          term += 1;
      }else if (holidays < 2 && term >= 0) {
          max_term = max(max_term,term);
          term = 0; 
      }
      weekdays = 0;
      holidays = 0;
  }
  max_term = max(max_term,term);
  cout << max_term <<endl;
}
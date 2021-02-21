#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long N,M;
  cin >> N >> M;
  int A[M];
  long sum_day;
  sum_day = 0;

  for (int i = 0; i < M; i++) {
    cin >> A[M];
    sum_day += A[M];
  }
  
    if (N-sum_day >= 0){
        cout << N-sum_day << endl;
    }else{
        cout << -1 << endl;  
  }
}
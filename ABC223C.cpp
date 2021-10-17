#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;

  double A[N],B[N];
  double fire_time = 0;
  
  for (long long i = 0; i < N; i++) {
    cin >> A[i] >> B[i];
    fire_time += A[i] / B[i];
  }

  double crush_time = fire_time / 2;
  double crush_point = 0;
  
  for (long long i = 0; i < N; i++) {
    if (crush_time > A[i]/B[i]){
        crush_time -= A[i]/B[i];
        crush_point += A[i];
    }else{
        crush_point += B[i] * crush_time;
        printf("%12.15f", crush_point);
        return 0;
    }
  }
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  double A[N];
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  
  sort(A,A+N);
  int i = 0;
  while (i < N){
  if (A[i]==A[i+1]){
      cout << "NO" << endl;
      exit(0);
  }else{
      i=i+1;
  }
  } 
  cout << "YES" << endl;
}
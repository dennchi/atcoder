#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,M;
  double all;
  cin >> N >> M;

  int A[N];
  for (int i = 0; i < N; i++) {
    cin >> A[i];
    all = all + A[i];
  }

  sort(A, A+N,std::greater<int>());

  if(A[M-1] < all/(4*M)){
    cout << "No" <<endl;
  }else{
    cout << "Yes" <<endl; 
  }
}
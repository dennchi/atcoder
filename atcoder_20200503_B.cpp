#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,K;
  cin >> N >> K;
  int d[K],A[50000];
  int x = 0;
  for (int i = 0; i < K ; i++) {
    cin >> d[i];
        for (int j = 0; j < d[i] ; j++){
            cin >> A[x];
            x++;
        }
  }
    sort(A,A+x);
    int ans = 1;

    for (int i = 0; i < x-1; i++) {
    if(A[i] != A[i+1]){
        ans++;
    }
  }
  cout << N-ans <<endl;
}

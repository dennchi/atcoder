#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long N,M;
  cin >> N >> M;
  long H[N];

  for (int i = 0; i < N ; i++) {
    cin >> H[i];
  }

  long AB[M][2];

  for (int j = 0; j < M ; j++) {
    cin >> AB[j][0] >> AB[j][1];
  }
  sort(&AB[0], &AB[M], [](auto& x, auto& y){return x[0] < y[0];});


  cout << H[1] <<endl;
}

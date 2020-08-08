#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A,B,M;
  cin >> A >> B >> M;

  int a[A],b[B],x[M],y[M],c[M];

  for (int i = 0; i < A; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < B; i++) {
    cin >> b[i];
  }

  for (int i = 0; i < M; i++) {
    cin >> x[i] >> y[i] >> c[i];
  }
  
  int min,m[M+1];
  min = 0;

    for (int i = 0; i < M; i++){
        m[i] = a[x[i]-1] + b[y[i]-1] - c[i];
    }

    sort(a,a+A);
    sort(b,b+B);
  
  m[M] = a[0] + b[0];

  sort(m,m+M+1);

  cout << m[0] <<endl;
}
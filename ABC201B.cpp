#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin >> N;
  
  vector<string> S(N);
  long long T[N],T_tmp[N];
  for (long long i = 0; i < N; i++) {
    cin >> S[i] >> T[i];
    T_tmp[i] = T[i];
  }

  sort(T_tmp,T_tmp+N);

  long long second_T = T_tmp[N-2];

  for (long long i = 0; i < N; i++) {
      if (second_T == T[i]) {
          cout << S[i] <<endl;
      }
  }


}
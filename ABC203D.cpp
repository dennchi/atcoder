#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,K;
  cin >> N >> K;
  
  long long A[N][N];
  long long center = 0;
  long long min_center = 200000000;

  for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
          cin >> A[i][j]; 
      }
  }

  for (long i = 0; i < N-K+1; i++) {
      vector<long long> tmp;
      for (int m = 0; m < K-1; m++) {
          for(int n = 0; n < K; n++){
              tmp.push_back(A[n][m]);
          }
      }
      for (long j = 0; j < N-K+1; j++) {
        for (int k = 0; k < K; k++){
            tmp.push_back(A[k+i][j+K-1]);
        }
       vector<long long> new_vec = {};
        copy(tmp.begin(),tmp.end(),new_vec.begin());
        sort(new_vec.begin(),new_vec.end());
        long long ite = K*K/2; 
        center = new_vec[ite];
        min_center = min(min_center,center);
        for(long long w = 0; w < K; w++) {
            tmp.erase(tmp.begin());
        } 
        
      }
  }
cout << min_center <<endl;


}
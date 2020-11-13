#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,K;
  cin >> N >> K;
  
  long long count = 0;

  for (int i = 2; i < 2*N+1; i++) {
      for (int j = 2; j < 2*N+1; j++) {
        if (i - j == K){
            if (i <= N+1 && j <= N+1) {
                count += (i-1) * (j-1);
            }else if(i > N+1 && j <= N+1){
                count += N * (j-1);
            }else if(i <= N+1 && j > N+1){
                count += (i-1) * N;
            }else if(i > N+1 && j > N+1){
                count += N * N;
            }
        }
    }
  }    


  cout << count <<endl;
}
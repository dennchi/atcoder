#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long K,N;
  cin >> K >> N; 

  int A[N];
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  long min_ans,rootA,rootB,rootmin;
  min_ans = 1000000;

  for (int i = 0; i < N; i++) {
      if(i==0){
          rootA = A[N-1] - A[0];
          rootB = K - (A[i+1] - A[i]);
          rootmin = min(rootA,rootB);
          min_ans = min(min_ans,rootmin);  
      }else if(i==(N-1)){
          rootA = K - (A[i] - A[i-1]);
          rootB = A[N-1] - A[0];
          rootmin = min(rootA,rootB);
          min_ans = min(min_ans,rootmin);  
      }else{
          rootA = K - (A[i] - A[i-1]);
          rootB = K - (A[i+1] - A[i]);
          rootmin = min(rootA,rootB);
          min_ans = min(min_ans,rootmin);  
      }
  }
  cout << min_ans <<endl;
  return 0;

  }

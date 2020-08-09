#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long K,num;
  cin >> K;
  
  if (K % 2 == 0 || K % 5 == 0){
      cout << -1 <<endl;
  }else if(K % 7 == 0){
      K = K/7;
      for (long long i = 0; i < K; i++){
           num += 1 * pow(10,i);
           if (num % K == 0) {
               cout << i+1 <<endl;
               break;
           }
      }
  }else{
      for (long long i = 0; i < K; i++){
           num += 7 * pow(10,i);
           if (num % K == 0) {
               cout << i+1 <<endl;
               break;
           }
      }
  }
  cout << -1 <<endl;
      
  

}
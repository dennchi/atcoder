#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S,T;
  cin >> S >> T;
  
  long long len_S,len_T;

  len_S = S.length();
  len_T = T.length();
  
  long count_tmp = 0;
  long count = 0;

  for (long i = 0; i < len_S - len_T + 1; i++) {
    for (long j = 0; j < len_T; j++) {
        if(S[i+j] == T[j]){
           count += 1;
        }        
       }
    count_tmp = max(count_tmp,count);
    count = 0;
  }
      
cout << len_T - count_tmp <<endl; 

}
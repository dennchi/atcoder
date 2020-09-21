#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin >> N;

  long long count = 0;
  long long cul = 0;
  long long num = 0;
  long long N_pre = N;

  for (long long i = 0; i < N; i++) {
     N_pre -= 1;
     cul = sqrt(N_pre);
     for (long long j = 1; j < cul+1; j++) {
         if (N_pre % j == 0) {
             num = N_pre / j;
             if(num != j){
                count += 2; 
             }else{
                count += 1;
             }
         }
     }
  }  
   cout << count <<endl;
}

    

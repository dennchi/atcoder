#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y) {
    int m = min(x, y);
    for(int d=m; d>0; d--) {
        if(x % d == 0 && y % d == 0) {
            return d;
        }
    }
}

int main() {
  long long N;
  cin >> N;
  
  long long count_max = 1;
  long long max_N = 1;

  long long s[N-1],t[N-1],x[N-1];
  for (long i = 0; i < N-1; i++) {
      cin >> s[i] >> t[i] >> x[i];
      count_max *= x[i];
  }
  

  long long j = 0;
  while(j < N-1) {
        if (s[j] == max_N) {
            max_N = t[j];
            j = 0;
        }else{
            j++;
        }    
  }

  long long f[N];
  for (long i = 0; i < N; i++) {
      f[i] = 0;
  }

  f[max_N-1] = count_max;
  long long tmp = 0;

 for (long i = 0; i < N; i++){
      for (long l = 0; l < N-1; l++){
          if (t[l] == max_N) {
              f[s[l]-1] = count_max / x[l];
              tmp = s[l]; 
          }
      }
      max_N = tmp;
      count_max = f[tmp-1];
  }  

  long long min_f = 1000000;
  for (long i = 0; i < N; i++) {
    min_f = min(min_f,f[i]);          
  }
    

   for (long i = 0; i < N; i++) {
   if (f[i] % min_f == 0) {
       cout << f[i] / min_f <<endl;
   }else{
       long long d = gcd(f[i],min_f);
       cout << f[i]/d << "/" << min_f/d <<endl;   

   }      
  }
  }

  

  
   
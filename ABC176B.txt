#include <bits/stdc++.h>
using namespace std;
 
int main() {
  char N[200000];
  cin >> N;
  
  int num;
  long long count,len;
  count = 0;

  len = strlen(N);

  for (long i = 0; i < len; i++) {
      num = N[i] - '0';
      count += num; 
  }
  
  if (count % 9 == 0){
     cout << "Yes" <<endl;    
  }else{
      cout << "No" <<endl;
  } 
 
  
      
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,X,T;
  cin >> N >> X >> T;

  long long count1,count2;

  count1 = N / X;
  count2 = N % X;
  
  if (count2 != 0){
     cout << count1 * T + T <<endl;    
  }else{
      cout << count1 * T <<endl;
  } 
 
  
      
}
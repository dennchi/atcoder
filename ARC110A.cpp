#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  
  long long count = 1;

  for (i = 2; i < N+1; i++){
      count = count * i;
  }
  cout << count + 1 <<endl;
}  
    

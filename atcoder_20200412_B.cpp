#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long N;
  cin >> N;
  long all;
  all = 0;
  
for (int i = 1; i < N+1; i++) {
    if(i % 3 != 0 && i % 5 != 0){
        all = all + i;
    }
  }

  cout << all << endl; 
  
}
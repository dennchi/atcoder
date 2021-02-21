#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long L,R,d,count;
  cin >> L >> R >> d;
  count = 0;
 
  for (long i = L; i < R+1; i++) {
    if (i % d == 0){
        count += 1;
    }
  }
     
    cout << count <<endl;
}
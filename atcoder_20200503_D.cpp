#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long X;
  cin >> X;
  long cul;
  int flag = 0;

  for (long i = -120; i < 120 ; i++) {
      if(flag == 1){
            break;
        } 
    for (long j = i+1; j < 120 ; j++) {
        cul = j*j*j*j*j - i*i*i*i*i;
        if(cul == X){
            cout << j << " " << i <<endl;
            flag = 1;
            break;
        }

    }
  }
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int X,N;
  cin >> X >> N;

  int p[N];

  for (int i = 0; i < N ; i++) {
    cin >> p[i];
  }

  sort(p,p+N);
  
  int check_p,minus_X,min_X,min_i;
  min_X = 100;
  min_i = X;

  for (int i = 0; i < 102 ; i++) {
    for (int j = 0; j < N ; j++) {
        if (p[j] == i){
            check_p = 0;
            break;
        }else{
            check_p = 1;
        }
    }
    if (check_p == 1){
         minus_X = abs(X - i);
         if (minus_X < min_X){
             min_X = minus_X;
             min_i = i;
         }
    }
    
    }
    cout << min_i <<endl;
  
}
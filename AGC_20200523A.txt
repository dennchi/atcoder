#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long T;
  cin >> T;
  long long N,A,B,C,D;
  
   for (int i = 0; i < T; i++) {
    cin >> N >> A >> B >> C >> D;
    long long num = 0;
    long long num_coin,A_div,B_div,C_div;
    
    A_div = N / 2;
    B_div = N / 3;
    C_div = N / 5;
    
    num = 1;
    num_coin = D;

    for(int j = 0; j < C_div; j++){
        num = 5;
        num_coin = D + (j+1) * C;

        if(num < N){
            for(int k = 0; k < b_div; k++){
                num = num + (k+1) * 3;
                num_coin = D + (j+1) * C;
        }

    }
    2*num
    3*num
    5*num
    num+1
    num-1

  }
    
  cout << "pon" << endl;

}
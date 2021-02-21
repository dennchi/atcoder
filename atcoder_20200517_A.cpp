#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long N;
  cin >> N;
  
  long A,B;
  A =N /100;
  B =(N - 100 * A) / 10;
  N = N - 100 * A - 10 * B;
  
    if (N == 2 || N == 4 || N == 5 || N == 7 || N == 9){
        cout << "hon" << endl;
    }else if(N == 3){
        cout << "bon" << endl;  
  }else{
      cout << "pon" << endl;
  }
}
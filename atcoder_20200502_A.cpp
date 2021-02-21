#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int K,A,B;
  cin >> K >> A >> B;
  int result = 0;

  for (int i = A; i < B+1; i++) {
    if(i%K == 0){
        cout << "OK" << endl;
        result = 0;
        break;
    }else{
        result = 1;
    }
  }
  if(result == 1){
        cout << "NG" << endl;
  }
  
}
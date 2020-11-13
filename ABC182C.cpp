#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin >> N;

  int count = 0;
  long long num = N;
  int dig[18];
  
  while( num ) {
        dig[count] = num % 10;
        num = num / 10;
        count++;
  }

  int num_tri = 0;
  int num_one = 0;
  int num_second = 0;
  
  for (long i = 0; i < count; i++) {
      if (dig[i] % 3 == 0){
          num_tri += 1;
      }else if (dig[i] % 3 == 1) {
          num_one += 1;
      }else{
          num_second += 1;
      }
  }
  if (count >= 3){
  if (num_one % 3 == 0 && num_second % 3 == 0) {
      cout << 0 <<endl;
  }else if (num_one % 3 == 0 && num_second % 3 == 1) {
      cout << 1 <<endl;
  }else if (num_one % 3 == 0 && num_second % 3 == 2) {
      if (num_one > 0){
        cout << 1 <<endl;
      }else{
        cout << 2 <<endl;
      }
  }else if (num_one % 3 == 1 && num_second % 3 == 0) {
      cout << 1 <<endl;
  }else if (num_one % 3 == 1 && num_second % 3 == 1) {
      cout << 0 <<endl;
  }else if (num_one % 3 == 1 && num_second % 3 == 2) {
      cout << 1 <<endl;
  }else if (num_one % 3 == 2 && num_second % 3 == 0) {
      if (num_second > 0){
        cout << 1 <<endl;
      }else{
        cout << 2 <<endl;
      }
  }else if (num_one % 3 == 2 && num_second % 3 == 1) {
      cout << 1 <<endl;
  }else if (num_one % 3 == 2 && num_second % 3 == 2) {
      cout << 0 <<endl;
  }
  }else if (count == 1) {
      if (num_tri == 1) {
          cout << 0 <<endl;
      }else{
          cout << -1 <<endl;
      }
  }else{
      if (num_tri == 2){
          cout << 0 <<endl;
      }else if (num_tri == 1) {
          cout << 1 <<endl;
      }else if (num_one == 1 && num_second == 1){
          cout << 0 <<endl;
      }else{
          cout << -1 <<endl;
      }
  }
}

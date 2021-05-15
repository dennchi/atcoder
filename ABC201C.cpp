#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin >> S;

  int count = 0;
  int count_o = 0;
  int count_x = 0;
  int count_hatena = 0;
  
  for (long long i = 0; i < 10; i++) {
    if (S[i] == 'o') {
        count_o += 1;
    }else if (S[i] == 'x') {
        count_x += 1;
    }else{
        count_hatena += 1;
    }
  }

  if (count_o > 4) {
      cout << 0 <<endl;
  }else if (count_o == 4) {
      cout << 24 <<endl;
  }else if (count_o == 3) {
      cout << 24 * count_hatena + 36 <<endl; 
  }else if (count_o == 2) {
      cout << 14 + 36*count_hatena + (24*count_hatena*(count_hatena-1)/2) <<endl;
  }else if (count_o == 1) {
      cout << (count_hatena + 1)*(count_hatena + 1)*(count_hatena + 1)*(count_hatena + 1) - (count_hatena*count_hatena*count_hatena*count_hatena) <<endl; 
  }else{
      cout << count_hatena*count_hatena*count_hatena*count_hatena <<endl; 
  }

}
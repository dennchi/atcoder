#include <bits/stdc++.h>
using namespace std;
 
int main() {
 string S;
 cin >> S;
 int n = 3;

  for (int bit = 0; bit < (1<<n); bit++) {
    for (int i = 0; i < n; ++i) {
        if (bit & (1<<i)) {
             S.push_back(i);
        }
    }
  }
     
}
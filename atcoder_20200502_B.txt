#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long X;
  cin >> X;
  long long Y = 100;
  long long i = 0;


while(X > Y){
    Y = 1.01 * Y;
    i = i + 1;
}

cout << i <<endl;
}
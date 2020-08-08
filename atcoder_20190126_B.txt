#include <bits/stdc++.h>
using namespace std;
 
int main() {
  double H , N;
  cin >> H >> N;
  double x;
  vector<int> vec(N);
  for (int i = 0; i < N; i++) {
  cin >> vec.at(i);
  }
  
   for (int i = 0; i < N; i++) {
    x += vec.at(i);
  }
  
  if (x >= H) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
}
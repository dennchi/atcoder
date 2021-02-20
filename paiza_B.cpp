#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int h,w,k;
  cin >> h >> w >> k;

  vector<string> S(h);
  for (long i = 0; i < h; i++) {
      cin >> S.at(i);
  }
  
  string sum_string = "";
  long long max_num = 0;
  long long sum = 0;

  for (long i = 0; i < h; i++) {
    for (long j = 0; j < w-k+1; j++) {
      for (long l = 0; l < k; l++) {
        sum_string += S[i][j+l];
      }
      sum = stoll(sum_string);
      max_num = max(max_num,sum);
      sum_string = "" ;
 }
  }
  
  for (long i = 0; i < w; i++) {
    for (long j = 0; j < h-k+1; j++) {
      for (long l = 0; l < k; l++) {
        sum_string += S[j+l][i];
      }
      long long sum = stoll(sum_string);
      max_num = max(max_num,sum);
      sum_string = "" ;
 }
  }

  cout << max_num <<endl;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;

  int num_ac = 0;
  int num_wa = 0;
  int num_tle = 0;
  int num_re = 0;

  string S[N];
  for (int i = 0; i < N; i++) {
    cin >> S[i];
    if (S[i] == "AC"){
        num_ac += 1;
    }else if (S[i] == "WA"){
        num_wa += 1;
    }else if (S[i] == "TLE"){
        num_tle += 1;
    }else{
        num_re += 1;
    }
  }
    cout << "AC x " << num_ac <<endl;
    cout << "WA x " << num_wa <<endl;
    cout << "TLE x " << num_tle <<endl;
    cout << "RE x " << num_re <<endl;
  
}
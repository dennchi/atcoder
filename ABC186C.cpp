#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin >> N;
 
  long long dig = 0;
  long long flag = 0;
  long long count = 0;
  long long i_ini;
 
  for (long i = 1; i < N+1; i++) {
      i_ini = i;
      flag = 0;
    while(i_ini != 0){
        dig = i_ini % 10;
        if (dig == 7) {
            flag = 1;
            break;
        }else{
            i_ini = i_ini / 10;
        }        
    }
    if (flag == 0) {
        i_ini = i;
        stringstream ss;
        ss << std::oct << i_ini;
        string s = ss.str();
        long v = stoi(s);
        while(v != 0){
        dig = v % 10;
        if (dig == 7) {
            flag = 1;
            break;            
        }else{
            v = v / 10;
        }
        }
        if (flag == 0) {
            count += 1;
        }        
    }
  }
  cout << count <<endl;
}
   
    
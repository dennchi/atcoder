#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S1,S2,S3;
  cin >> S1 >> S2 >> S3;

  long long N1 = 0;
  long long N2 = 0;
  long long N3 = 0;

  string str_N1 = "";
  string str_N2 = "";
  string str_N3 = "";

  long long len_S1 = S1.length();
  long long len_S2 = S2.length();
  long long len_S3 = S3.length();

  long long flag = 0;

  for (long i = pow(10,len_S1-1); i < pow(10,len_S1); i++) {
    for (long j = pow(10,len_S2-1); j < pow(10,len_S2); j++) {
        N3 = i + j;
        str_N1 = to_string(i);
        str_N2 = to_string(j);
        str_N3 = to_string(N3);

        if (str_N3.length() != len_S3) {
            break;
        }

        for (long k = 0; k < len_S1; k++) {
            if (str_N1[k] == str_N2[k]) {
                if (S1[k] != S2[k]){
                    flag = 1;
                    break;
                }
            }else if (str_N1[k] == str_N3[k]) {
                if (S1[k] != S3[k]){
                    flag = 1;
                    break;
                }
            }
        }
        for (long k = 0; k < len_S2; k++) {
            if (str_N2[k] == str_N3[k]) {
                if (S2[k] != S3[k]){
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0) {
            cout << i <<endl;
            cout << j <<endl;
            cout << N3 <<endl;
            return 0;
        }else{
            flag = 0;
        }
        
    }
  }

    cout << "UNSOLVABLE" <<endl;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long N;
  cin >> N;

  for (long i = 1; i < N+1; i++) {
    long count =0;
    long n = sqrt(i);
    for (long j = 1; j < n; j++) {
        for (long k = j; k < n; k++) {
            for (long l = k; l < n; l++) {
               if (j*j+k*k+l*l+j*k+k*l+l*j == i && j == k && k == l) {
                   count += 1;
                }else if (j*j+k*k+l*l+j*k+k*l+l*j == i && j == k && k != l) {
                   count += 3;
                }else if (j*j+k*k+l*l+j*k+k*l+l*j == i && j != k && k == l) {
                   count += 3;
                }else if (j*j+k*k+l*l+j*k+k*l+l*j == i && j != k && k != l) {
                   count += 6;
                }
            }
        }
    }
    cout << count <<endl;
  }
     
}
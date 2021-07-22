#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin >> N;

  long long t[N],l[N],r[N];
  for (long long i = 0; i < N; i++) {
    cin >> t[i] >> l[i] >> r[i];
  }
  

  long long count = 0;

  for (long long i = 0; i < N-1; i++) {
    for (long long j = i+1; j < N; j++) {
    
       if (t[i] == 1){
           if (t[j] == 1){
               if (l[i] <= r[j] && r[i] >= l[j]){
                   count += 1;
               }
           }else if (t[j] == 2){
               if (l[i] < r[j] && r[i] >= l[j]){
                   count += 1;
               }
           }else if (t[j] == 3){
               if (l[i] <= r[j] && r[i] > l[j]){
                   count += 1;
               }
           }else{
               if (l[i] < r[j] && r[i] > l[j]){
                   count += 1;
               }
           }
       }else if (t[i] == 2){
           if (t[j] == 1){
               if (l[i] <= r[j] && r[i] > l[j]){
                   count += 1;
               }
           }else if (t[j] == 2){
               if (l[i] < r[j] && r[i] > l[j]){
                   count += 1;
               }
           }else if (t[j] == 3){
               if (l[i] <= r[j] && r[i] > l[j]){
                   count += 1;
               }
           }else{
               if (l[i] < r[j] && r[i] > l[j]){
                   count += 1;
               }
           }
       }else if (t[i] == 3){
           if (t[j] == 1){
               if (l[i] < r[j] && r[i] >= l[j]){
                   count += 1;
               }

           }else if (t[j] == 2){
               if (l[i] < r[j] && r[i] >= l[j]){
                   count += 1;
               }

           }else if (t[j] == 3){
               if (l[i] < r[j] && r[i] > l[j]){
                   count += 1;
               }

           }else{
               if (l[i] < r[j] && r[i] > l[j]){
                   count += 1;
               }

           }
       }else if (t[i] == 4){
           if (t[j] == 1){
               if (l[i] < r[j] && r[i] > l[j]){
                   count += 1;
               }

           }else if (t[j] == 2){
               if (l[i] < r[j] && r[i] > l[j]){
                   count += 1;
               }

           }else if (t[j] == 3){
               if (l[i] < r[j] && r[i] > l[j]){
                   count += 1;
               }

           }else{
               if (l[i] < r[j] && r[i] > l[j]){
                   count += 1;
               }

           }
       }
    }
    
  }

  cout << count <<endl;
}
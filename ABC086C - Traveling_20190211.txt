#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  int t[N],x[N],y[N];
  for (int i = 0; i < N; i++) {
    cin >> t[i] >> x[i] >> y[i];
  }
  
  int i = 0;
  while(i < N){
     if(x[i]==x[i+1] && y[i]==y[i+1]+1){
         i++;
         continue;
     }else if(x[i]==x[i+1] && y[i]==y[i+1]-1){
         i++;
         continue;
     }else if(x[i]==x[i+1]+1 && y[i]==y[i+1]){
         i++;
         continue;
     }else if(x[i]==x[i+1]-1 && y[i]==y[i+1]){
         i++;
         continue;
     }else{
         cout << "NO" << endl;
         break;
     }
  }
  cout << "YES" << endl;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin >> N;

  string str = "abcdefghijklmnopqrstuvwxyz";
  
  long long N_syo,N_amari;
  N_amari = N;

  N_syo = log10(N) / log10(26);

  for(int i = 1; i < N_syo+1; i++) {
    N_amari = N_amari - pow(26,i);  
  }
  
  if(N_amari == 0){
     for(int i = 0; i < N_syo; i++){
     cout << "z";
  }
  }else{
     for(int i = 0; i < N_syo; i++){
     N_alpnum = N_amari / pow(26,N_syo - i);
     cout << str[N_alpnum]
  } 
  }
  cout <<  <<endl;
}
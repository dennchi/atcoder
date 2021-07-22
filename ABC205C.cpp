#include <bits/stdc++.h>
#include <map>
using namespace std;
 
int main() {
  long long A,B,C;
  cin >> A >> B >> C;
  
  if (C % 2 == 0){
    if (A >= 0 && B >= 0){
      if (A == B) {
        cout << "=" <<endl;
      }else if (A > B){
        cout << ">" <<endl;
      }else{
        cout << "<" <<endl;
      }
    }else if (A < 0 && B >= 0){
      A = A * (-1);
      if (A == B) {
        cout << "=" <<endl;
      }else if (A > B){
        cout << ">" <<endl;
      }else{
        cout << "<" <<endl;
      }      
    }else if (A >= 0 && B < 0){
      B = B * (-1);
      if (A == B) {
        cout << "=" <<endl;
      }else if (A > B){
        cout << ">" <<endl;
      }else{
        cout << "<" <<endl;
      }
    }else{
      A = A * (-1);
      B = B * (-1);
      if (A == B) {
        cout << "=" <<endl;
      }else if (A > B){
        cout << ">" <<endl;
      }else{
        cout << "<" <<endl;
      }
    }

  }else{
    if (A >= 0 && B >= 0){
      if (A == B) {
        cout << "=" <<endl;
      }else if (A > B){
        cout << ">" <<endl;
      }else{
        cout << "<" <<endl;
      }
    }else if (A < 0 && B >= 0){
      cout << "<" <<endl;      
    }else if (A >= 0 && B < 0){
      cout << ">" <<endl;
    }else{
      if (A == B) {
        cout << "=" <<endl;
      }else if (A > B){
        cout << ">" <<endl;
      }else{
        cout << "<" <<endl;
      }
    }


  }
}
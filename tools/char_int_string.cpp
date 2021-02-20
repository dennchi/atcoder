#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string X;
    cin >> X;
    
    // stringの一部を取り出しintに変換
    int j = 0;
    char c = X[j];
    int digit = c - '0';

    // stringをintに変換
    int A = atoi(X.c_str()); 

    // intをstringに変換
    string N = to_string(digit);
}
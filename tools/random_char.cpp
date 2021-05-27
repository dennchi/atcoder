#include <bits/stdc++.h>
using namespace std;

char getRandomCharLower(void)
{
//　英小文字の例
const char CHARS[] = "01";
int index = rand() % 2;
char c = CHARS[index];
return c;
}
 

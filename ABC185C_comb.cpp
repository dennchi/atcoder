#include <bits/stdc++.h>
using namespace std;

uint64_t combinations2(uint64_t n, uint64_t k) {
    uint64_t r = 1;
    for (uint64_t d = 1; d <= k; ++d) {
        r *= n--;
        r /= d;
    }
    return r;
}

int main() {
  int L;
  cin >> L;

long long ans_count = 0;

ans_count = combinations2(L-1, 11);

cout << ans_count <<endl;

}

   
    



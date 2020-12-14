#include <bits/stdc++.h>
using namespace std;

uint64_t comb(uint64_t n, uint64_t k) {
    uint64_t r = 1;
    for (uint64_t d = 1; d <= k; ++d) {
        r *= n--;
        r /= d;
    }
    return r;
}


   
    



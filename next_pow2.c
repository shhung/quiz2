#include <stdint.h>
#include <stdio.h>
static inline uint64_t pow2(uint8_t e) { return ((uint64_t)1) << e; }

// naive implement
uint64_t next_pow2(uint64_t x)
{
    uint8_t lo = 0, hi = 63;
    while (lo < hi) {
        uint8_t test = (lo + hi)/2;
        if (x < pow2(test)) { hi = test; }
        else if (pow2(test) < x) { lo = test+1; }
        else { return pow2(test); }
    }
    return pow2(lo);
}

int main() 
{
    int result = next_pow2(25);
    printf("%d\n", result);
    return 0;
}
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// bitwise implement
uint64_t next_pow2(uint64_t x)
{
    x |= x >> 1;
    x |= x >> 2;
    x |= x >> 4;
    x |= x >> 8;
    x |= x >> 16;
    x |= x >> 32;
    return x + 1;
}

int main(int argc, char *argv[])
{
    uint64_t input = atoi(argv[1]);
    uint64_t result = next_pow2(input);
    printf("%ld\n", result);
    return 0;
}
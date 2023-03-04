#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// bitwise implement
uint64_t next_pow2(uint64_t x)
{
    int leadZero = __builtin_clzl(x);
    int leadOne = 64 - leadZero;
    return (uint64_t)1 << leadOne;
}

int main(int argc, char *argv[])
{
    if (argc != 1) {
        printf("need one argument\n");
        return 0;
    }
    uint64_t input = atoi(argv[1]);
    uint64_t result = next_pow2(input);
    printf("%ld\n", result);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int concatenatedBinary(int n)
{
    const int M = 1e9 + 7;
    int len = 0; /* the bit length to be shifted */
    /* use long here as it potentially could overflow for int */
    long ans = 0;
    for (int i = 1; i <= n; i++) {
        if ((__builtin_ffs(i) + __builtin_clz(i)) == 32)
            len++;
        ans = (i | (ans<<len)) % M; 
    }
    return ans;
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("need one argument\n");
        return 0;
    }
    int input = atoi(argv[1]);
    int result = concatenatedBinary(input);
    printf("%d\n", result);
    return 0;
}
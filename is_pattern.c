#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

bool is_pattern(uint16_t x) {
    const uint16_t n = ~x + 1;
    return (n ^ x) < x;
}



int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("need one argument\n");
        return 0;
    }
    int input = atoi(argv[1]);
    if (is_pattern(input))
        printf("%d(%x) is pattern\n", input, input);
    // else {
    //     printf("false\n");
    // }
    return 0;
}
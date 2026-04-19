#include <stdio.h>

/*
PP 2.23

Assume below functions are executed as a 32-bit program on a machine that uses two’s complement
arithmetic. Assume also that right shifts of signed values are performed arithmetically, while
right shifts of unsigned values are performed logically.
*/

void print_binary(int n) {
    for (int i = sizeof(n) * 8 - 1; i >= 0; i--) {
        putchar((n & (1u << i)) ? '1' : '0');
        if (i % 4 == 0) putchar(' ');
    }
}

int fun1(unsigned int word) {
    return (int)((word << 24) >> 24);
}

int fun2(unsigned int word) {
    return ((int)word << 24) >> 24;
}

int main() {
    int w = 0x87654321;

    printf("%d\n", w);
    print_binary(w);
    printf("\n");

    w = w >> 1;
    print_binary(w);
    printf("\n");

    w = w << 1;
    print_binary(w);
    printf("\n");

    w = w >> 1;
    print_binary(w);
    printf("\n");
}

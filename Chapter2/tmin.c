/*
Why minimum value of two’s-complement is written like?

#define INT_MAX 2147483647
#define INT_MIN (-INT_MAX - 1) -> -2147483648

In C, the literal 2147483648 is not an int — it’s too large to fit in a 32-bit signed int.
So by the rules of the C standard (§6.4.4.1), the compiler promotes it to long or unsigned long,
depending on what fits. That means -2147483648 is actually parsed as -(2147483648)
and since 2147483648 is an unsigned or long constant, the whole expression becomes of that larger
type, not a 32-bit signed int. In this -(2147483648) expression, firstly "2147483648" that part is
evaluated. Since it overflows the integer bits, it is either casted in long or overflown bits are
discarded.

So -2147483648 is not representable as a signed 32-bit int constant in standard C.

*/

#include <limits.h>
#include <stdio.h>

void print_binary(int n) {
    for (int i = sizeof(n) * 8 - 1; i >= 0; i--) {
        putchar((n & (1u << i)) ? '1' : '0');
        if (i % 4 == 0) putchar(' ');
    }
}

int main() {
    printf("INT_MIN dec=%d hex=%x\n", INT_MIN, INT_MIN);
    print_binary(INT_MIN);
    printf("\n");

    printf("\n");

    printf("INT_MAX dec=%d hex=%x\n", INT_MAX, INT_MAX);
    print_binary(2147483648);
    printf("\n");

    return 0;
}

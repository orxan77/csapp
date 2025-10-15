/*
Practice Problem 2.21 (solution page 185)

Assuming the expressions are evaluated when executing a 32-bit program on a machine
that uses two’s-complement arithmetic, fill in the following table describing
the effect of casting and relational operations
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    printf("unsigned %u\n", 2147483648u);
    printf("signed %d\n", 2147483647);

    /*
    They are equal. Left side stays signed after subtraction. When compared, it gets
    promoted to unsigned. When unsigned, T2U = -2147483648 + 2^32 = 2147483648.
    */
    printf("%d\n", -2147483647 - 1 == 2147483648U);
    printf("%d\n", -2147483647 - 1 < 2147483647);

    /*
    On the left side, -2147483647 promotes to unsigned and becomes 2147483649.
    Then, 2147483649 - 1 = 2147483648 and 2147483648 > 2147483647. So, the answer is False.
    */
    printf("%d\n", -2147483647 - 1U < 2147483647);

    /*
    Both sides are signed ints. So, normal comparison. The answer is True.
    */
    printf("%d\n", -2147483647 - 1 < -2147483647);

    /*
    Both sides are promoted to unsigned ints.
    Left side becomes 2147483648 and right side becomes 2147483649. 2147483648 < 2147483649 = True
    */
    printf("%d\n", -2147483647 - 1U < -2147483647);
}

#include <stdio.h>

int main() {
    int x = 0x51;
    int y = 0x51;

    int res = !(x ^ y);
    printf("0x%x\n", res);

    return 0;
}

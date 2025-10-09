#include <stdio.h>

void a(int x) {
    int mask = 0xFF;
    int res = x & mask;
    printf("0x%x\n", res);
}

void b(int x) {
    int last_byte_mask = 0x000000FF;
    int first_three_byte_mask = 0xFFFFFF00;
    int res = (~x & first_three_byte_mask) | (x & last_byte_mask);
    printf("0x%x\n", res);
}

void c(int x) {
    int mask = 0xFF;
    int res = x | mask;
    printf("0x%x\n", res);
}

int main() {
    int x = 0x87654321;
    a(x);
    b(x);
    c(x);
    return 0;
}

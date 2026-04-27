#include <stdio.h>

long lt_cnt = 0;
long ge_cnt = 0;

long absdiff(long x, long y) {
    long result;
    if (x < y) {
        lt_cnt++;
        result = y - x;
    } else {
        ge_cnt++;
        result = x - y;
    }
    return result;
}

long absdiff_goto(long x, long y) {
    long result;
    int t = x < y;
    if (t) goto true_b;
    ge_cnt++;
    result = x - y;
    goto done;
true_b:
    lt_cnt++;
    result = y - x;
    goto done;
done:
    return result;
}

int main() {
    long a = 5, b = 10;
    long result = absdiff_goto(a, b);
    printf("absdiff(%ld, %ld) = %ld\n", a, b, result);
    printf("lt_cnt = %ld, ge_cnt = %ld\n", lt_cnt, ge_cnt);
    return 0;
}
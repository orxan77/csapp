#include <stdio.h>

void cond(short a, short *p) {
    if (a && *p < a) *p = a;
}

void goto_cond_correct_1(short a, short *p) {
    if (a && *p < a) {
        goto update;
    }
    goto done;
update:
    *p = a;
done:
    return;
}

void goto_cond_correct_2(short a, short *p) {
    /*
        The condition is negated, so if the condition is false, it will jump to done and skip the
        update.
    */
    if (!a || *p >= a) goto done;
    *p = a;
done:
    return;
}

void goto_cond_wrong(short a, short *p) {
    if (a && *p < a) {
        goto update;
    }
/*
    Even the condition is false, the code will continue to the update label
    and update the value of *p, which is not intended.
*/
update:
    *p = a;
}

int main() {
    short x = 10;
    goto_cond_correct_1(5, &x);
    printf("x = %d\n", x);
    return 0;
}
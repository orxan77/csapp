long mult2(long, long);

void multstore(long x, long y, long *dest) {
    long t = mult2(x, y);
    *dest = t;
}

/*

To see the assembly code generated for this C code:
> gcc -Og -S mstore.c

To see the object code generated for this C code:
> gcc -Og -c mstore.c

To see the content of the object file:
> objdump -d mstore.o
*/
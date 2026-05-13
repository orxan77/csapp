#include <stdio.h>

struct rect {
    long llx;
    long lly;
    unsigned long width;
    unsigned long height;
    unsigned int color;
};

long area(struct rect *r) {
    return r->width * r->height;
}

int main(int argc, char const *argv[]) {
    struct rect r;
    r.llx = 0;
    r.lly = 0;
    r.width = 10;
    r.height = 20;
    r.color = 0xFF0000;  // Red color

    struct rect b = {0, 0, 0xFF00FF, 10, 20};

    printf("Rectangle: (%ld, %ld) to (%ld, %ld), Color: 0x%X\n", r.llx, r.lly, r.llx + r.width,
           r.lly + r.height, r.color);
    printf("Area of rectangle r: %ld\n", area(&r));

    return 0;
}

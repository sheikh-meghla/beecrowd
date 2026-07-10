#include<stdio.h>

struct x {
    int a;
    char b;
    float c;
};


 int main() {
    struct x x1;
    x1.a = 10;
    x1.b = 'c';
    x1.c = 3.14;
    printf(" int: %d\n char: %c\n float: %f\n", x1.a, x1.b, x1.c);
    return 0;
 }
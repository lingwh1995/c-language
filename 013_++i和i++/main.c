#include <stdio.h>

int main()
{
    int a = 10, b = 10;
    int x = ++a;
    printf("x: %d\n", x);
    printf("a: %d\n", a);
    x = b++;
    printf("x: %d\n", x);
    printf("b: %d\n", b);
}
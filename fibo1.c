#include <stdio.h>

int main()
{
    int a = 0;
    int b = 1;
    int c = -1;

    printf("%d\n%d\n", a, b);

    while (c < 100) {
        c = a + b;
        a = b;
        b = c;
        printf("%d\n", c);
    }


}
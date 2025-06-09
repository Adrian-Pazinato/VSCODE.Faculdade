#include <stdio.h>

int main()
{

    int x, y;

    x = 15;
    y = 10;

    printf("y + x = %d\n", y + x);

    y = x++;

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("y + x = %d\n", y + x);

    x = 20;
    y = ++x;
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    y = x++;
    printf("y + x = %d\n", x + y);

    getchar();

    return 0;
}
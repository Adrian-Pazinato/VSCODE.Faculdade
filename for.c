#include <stdio.h>

int main()
{

    int i, j;

    for (i = 0, j = 1000; i < j; i++, j--)
    {
        printf("i = %d, j = %d\n", i, j);
    }

    getchar();
    return 0;
}
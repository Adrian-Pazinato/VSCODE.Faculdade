#include <stdio.h>

int main()
{

    long int i, j;

    for (i = 0, j = 1000; i < j; i++, j--)
    {
        printf("i = %ld, j = %ld\n", i, j);
    }

    getchar();
    return 0;
}
#include <stdio.h>

int main()
{
    for (int i = 0; i < 100; i++)
    {
        if (i == 15)
        {
            break;
        }
        printf("%d\n", i);
    }
    getchar();
    return 0;
}
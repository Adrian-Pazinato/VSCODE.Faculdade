#include <stdio.h>

int main()
{
    for (int i = 0; i < 100; i++)
    {
        if (i == 5)
        {
            break;
        }
        printf("%d\n", i);
    }
    getchar();
    return 0;
}
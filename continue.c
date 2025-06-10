#include <stdio.h>

int main()
{
    for (int i = 0; i < 500; i++)
    {
        if (i % 15 == 0)
        {
            // Skip numbers that are multiples of 15
            // This is where the continue statement is used
            continue;
        }
        printf("%d\n", i);
    }
    getchar();
    return 0;
}
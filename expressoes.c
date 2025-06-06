#include <stdio.h>

int main() {

    int x, y;

    x = 15;
    y = 10;
    
    printf("y + x = %d\n", y + x);
    
    y = x++;

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    printf("y + x = %d\n", y + x);
    return 0;
}
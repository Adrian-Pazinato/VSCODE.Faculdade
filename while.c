#include <stdio.h>

int main() {
    int res, x = 1;
    while (x <= 15) {
        res = 3 * x;
        printf("Res = %d\n", res);
        x++;
    }
    getchar();
    return 0;
}
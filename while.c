#include <stdio.h>

int main() {
    int res, x = 1;
    while (x <= 11) {
        res = 3 * x;
        printf("Res = %d\n", res);
        x++;
    }
}
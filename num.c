#include <stdio.h>
#include <stdlib.h>

int main() {

    int num = 101;

    if(num >= 10) 
        printf("numero e maior ou igual a 10\n");
    if(num > 100)
        printf("numero maior que 100\n");;
    if(num < 10)
        printf("menor que 10\n");
    if(num < 100)
        printf("menor que 100\n");

    getchar();
    return 0;
}
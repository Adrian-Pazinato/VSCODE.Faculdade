#include <stdio.h>

int main()
{
    int base, potencia;
    long int result = 1;

    printf("digite um numero: ");
    scanf("%d", &base);
    printf("digite outro numero: ");
    scanf("%d", &potencia);

    for (int xreca = 0; xreca < potencia; xreca++)
    {
        result = result * base;
    }

    printf("elevado de %d e %d eh: %ld\n", base, potencia, result);
    getchar(); // To consume the newline character left by scanf
    printf("meta o pe no acelerador\n");
    getchar();

    return 0;
}
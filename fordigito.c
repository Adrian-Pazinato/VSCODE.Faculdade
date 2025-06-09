#include <stdio.h>

int main()
{
    int base, potencia;
    long int result = 1;

    printf("Digite um numero: ");
    scanf("%d", &base);
    printf("Digite outro numero: ");
    scanf("%d", &potencia);

    for (int xreca = 0; xreca < potencia; xreca++)
    {
        result = result * base;
    }

    printf("elevado de %d e %d eh: %ld\n", base, potencia, result);
    getchar(); // To consume the newline character left by scanf
    printf("Pressione Enter para sair...");
    getchar();

    return 0;
}
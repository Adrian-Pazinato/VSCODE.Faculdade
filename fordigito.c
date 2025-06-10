#include <stdio.h>

int main()
{
    int potencia, expoente;
    long int result = 1;

    printf("digite a potencia: ");
    scanf("%d", &potencia);
    printf("digite o expoente: ");
    scanf("%d", &expoente);

    for (int xreca = 0; xreca < expoente; xreca++)
    {
        result = result * potencia;
    }

    printf("elevado de %d e %d eh: %ld\n", potencia, expoente, result);
    getchar();
    printf("meta o pe no acelerador\n");
    getchar();

    return 0;
}
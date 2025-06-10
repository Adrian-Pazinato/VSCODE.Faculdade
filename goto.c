#include <stdio.h>

int main()
{

    int numero;

    printf("Insira um numero positivo: ");

    scanf("%d", &numero);

    if (numero <= 0)
    {

        if (numero <= 0) // Verifica se o número não é positivo
        {
            printf("err0: numero invalido.\n");
        }
        else
        {
            printf("numero valido: %d\n", numero);
        }

        getchar();
        return 0;
    }
}
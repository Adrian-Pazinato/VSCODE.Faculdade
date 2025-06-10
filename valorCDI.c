#include <stdio.h>

int main()
{
    int CDI, MercadoPago, ValorConta, Lucro, ResultMes, ResultAno;
    printf("Digite o valor do CDI: ");
    scanf("%d", &CDI);
    printf("Digite o valor da conta: ");
    scanf("%d", &ValorConta);

    MercadoPago = (int)(CDI * 1.2);
    printf("Valor Mercado Pago: %d\n", MercadoPago);
    printf("Valor do CDI: %d\n", CDI);

    Lucro = MercadoPago - CDI;

    ResultMes = MercadoPago / 12;
    ResultAno = MercadoPago * 1;

    printf("Lucro : %d\n", Lucro);
    printf("Valor Mercado Pago: %d\n", MercadoPago);
    printf("Valor da conta: %d\n", ValorConta);
    printf("Valor mensal: %d\n", ResultMes);
    printf("Valor anual: %d\n", ResultAno);

    getchar();
    return 0;
}
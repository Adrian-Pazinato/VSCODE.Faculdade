#include <stdio.h>
#include <stdio.h>

int main()
{
    float CDI, ValorConta, MercadoPago, Lucro, ResultMes, ResultAno;

    printf("Digite o valor do CDI: ");
    scanf("%f", &CDI);

    printf("Digite o valor da conta: ");
    scanf("%f", &ValorConta);

    MercadoPago = CDI * 1.2f;
    Lucro = ValorConta * MercadoPago;
    ResultMes = Lucro / 12.0f;
    ResultAno = Lucro * 1.0f;

    printf("Valor Mercado Pago: %.4f\n", MercadoPago);
    printf("Valor do CDI: %.4f\n", CDI);
    printf("Valor da conta: %.2f\n", ValorConta);
    printf("Lucro : %.2f\n", Lucro);
    printf("Valor mensal: %.2f\n", ResultMes);
    printf("Valor anual: %.2f\n", ResultAno);

    return 0;
}

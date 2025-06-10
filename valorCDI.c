#include <stdio.h>
#include <stdio.h>

int main()
{
    float CDI, ValorConta, MercadoPago, Lucro, ResultMes, ResultAno, ResultMesTaxa, ResultAnoTaxa, Taxa;
    printf("Bem vindo ao calculador de lucro do Mercado Pago by Didica do Baile\n");

    printf("Digite o valor do CDI: ");
    scanf("%f", &CDI);

    printf("Digite o valor da conta: ");
    scanf("%f", &ValorConta);

    MercadoPago = CDI * 1.2f;
    Taxa = 0.225f;
    Lucro = ValorConta * MercadoPago;
    ResultMes = Lucro / 12.0f;
    ResultAno = Lucro * 1.0f;
    ResultAnoTaxa = ResultAno * Taxa;
    ResultMesTaxa = ResultMes * Taxa;

    ResultAnoTaxa = ResultAnoTaxa - ResultAno;
    ResultMesTaxa = ResultMesTaxa - ResultMes;

    printf("Valor mensal bruto: %.2f\n", ResultMes);
    printf("Valor anual bruto: %.2f\n", ResultAno);
    printf("Valor mensal liquido: %.2f\n", ResultMesTaxa);
    printf("Valor anual liquido: %.2f\n", ResultAnoTaxa);

    getchar();
    printf("Obrigado por usar o calculador de lucro do Mercado Pago by Didica do Baile\n");
    printf("Pressione Enter para sair...\n");
    getchar();
    return 0;
}

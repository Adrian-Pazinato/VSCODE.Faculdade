#include <stdio.h>

int main()
{
    float CDI, ValorConta, MercadoPago, Lucro, ResultMes, ResultAno, ResultMesTaxa, ResultAnoTaxa, Taxa, ResultAnoSemMP, ResultMesSemMP;
    printf("Bem vindo ao calculador de CDI do Mercado Pago by Didica do Baile\n");

    printf("Digite o valor do CDI: ");
    scanf("%f", &CDI);

    printf("Digite o valor da conta: ");
    scanf("%f", &ValorConta);

    ResultAnoSemMP = ValorConta * CDI;
    ResultMesSemMP = ValorConta * CDI / 12.0f;

    MercadoPago = CDI * 1.2f;
    Taxa = 0.225f;

    // ResultAnoSemMP = ResultAnoSemMP - Taxa;
    // ResultMesSemMP = ResultMesSemMP - Taxa;

    Lucro = ValorConta * MercadoPago;
    ResultMes = Lucro / 12.0f;
    ResultAno = Lucro * 1.0f;

    ResultAnoTaxa = ResultAno * Taxa;
    ResultMesTaxa = ResultMes * Taxa;

    ResultAnoTaxa = ResultAnoTaxa - ResultAno;
    ResultMesTaxa = ResultMesTaxa - ResultMes;

    printf("Valor mensal bruto sem Mercado Pago: %.2f\n", ResultMesSemMP);
    printf("Valor anual bruto sem Mercado Pago: %.2f\n", ResultAnoSemMP);
    printf("Valor mensal bruto: %.2f\n", ResultMes);
    printf("Valor anual bruto: %.2f\n", ResultAno);
    printf("Valor mensal liquido: %.2f\n", ResultMesTaxa);
    printf("Valor anual liquido: %.2f\n", ResultAnoTaxa);

    getchar();
    printf("Calculador de CDI do Mercado Pago by Didica do Baile\n");
    printf("Pressione Enter para cair fora...\n");
    getchar();
    return 0;
}

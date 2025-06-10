#include <stdio.h>
#include <string.h>

int idade;

int main()
{
    while (1)
    {
        printf("Digite sua idade: ");
        scanf("%d", &idade);

        if (idade < 18)
        {
            printf("Voce eh menor de idade, fale com p diddy\n");
            continue; 
        }
        else if (idade >= 18 && idade <= 65)
        {
            printf("Voce eh adulto fudido clt pagador de contas\n");
            continue; 
        }
        else if (idade > 65 && idade < 101)
        {
            printf("Voce eh velho capenga e tem artrose\n");
            continue;
        }
        else if (idade > 101)
        {
            printf("Voce eh um zumbi, chame michael jackson para fazer um video clipe!\n");
            continue;
        }
        else if (idade < 1)
        {
            printf("Isso é impossivel, seu bumba mole\n");
            continue; 
        }
    }
    printf("Acabou\n");
    getchar();
    return 0;
}
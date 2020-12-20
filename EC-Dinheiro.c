#include <stdio.h>
#include <math.h>

int main()
{
    float dinheiroTotal;
    int cont, troco;

    int notas[7] = {100, 50, 20, 10, 5, 2, 1};
    float centavos[5] = {0.50, 0.25, 0.10, 0.5, 0.1};
    int centavosTabela[5] = {50, 25, 10, 5, 1};

    scanf("%f", &dinheiroTotal);

    /*REAIS && REAL*/

    for (cont = 0; cont <= 6; cont++)
    {
        troco = 0;
        while (notas[cont] <= dinheiroTotal)
        {
            dinheiroTotal = dinheiroTotal - (float)notas[cont];
            troco++;
            if (notas[cont] == 1)
            {
                printf("1 moeda(s) de 1 real\n");
                troco = 0;
            }
        }
        if (troco != 0)
        {
            printf("%d nota(s) de %d reais \n", troco, notas[cont]);
        }
    }
    /*CENTAVOS*/
    for (cont = 0; cont <= 4; cont++)
    {
        troco = 0;
        while (centavos[cont] <= dinheiroTotal)
        {

            dinheiroTotal = dinheiroTotal - centavos[cont];
            
            troco++;
        }
        if (troco != 0)
        {
            printf("%d moeda(s) de %d centavos \n", troco, centavosTabela[cont]);
        }
    }

    dinheiroTotal = dinheiroTotal * 100;
    if (dinheiroTotal >= 1)
    {
        printf("1 moeda(s) de 1 centavo\n");
        troco = 0;
    }
    return 0;
}

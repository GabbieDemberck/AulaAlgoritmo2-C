/*Faça um algoritmo que realize o cálculo de PI para N termos informados pelo usuário.
 Sendo PI = (4/1)-(4/3)+(4/5)-(4/7)+(4/9)... Neste caso, o N seria de 5 termos.
*/
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main()
{
    int n, cont, cont2;
    double pi;
    bool impar = true;
    pi = (4 / 1);
    
    scanf("%i",n);

    for (cont = 3; cont <= n; cont=cont+2){ /*Faz o loop ir até N números*/
            if (impar) /* Outro que reconhece número ímpar (Ímpar = soma || Par = subtrai)*/
            {
                pi = pi - (4 / cont);
                printf("%f", pi);
                impar = false;
            }
            else
            {
                pi = pi + (4 / cont);
                printf("%f", pi);
                impar = true;
            }
    }
    return 0;
}
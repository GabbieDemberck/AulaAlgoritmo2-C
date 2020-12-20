/**Faça um algoritmo que leia N números,até que o número digitado seja maior que 20. 
 * Quando isto ocorrer, informe a média simples dos números digitados. Desconsidere o último número digitado.
 * 
 */
#include <stdio.h>
#include <math.h>

int main
{
    int N, mediaN,contagem;

    do{
        contagem++;
        mediaN = mediaN + N;
        scanf("%N", &N);
    } while (N <= 20);

    mediaN = mediaN/contagem;

    return 0;
}
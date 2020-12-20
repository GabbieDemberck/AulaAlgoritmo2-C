/*Faça um algoritmo que calcule o m.m.c. de dois números inteiros informados pelo usuário.*/
#include <stdio.h>
#include <math.h>

int main()
{
    int mmc, result, i ,num1,num2;

    scanf("%d %d",num1,num2);
    for (i = 2; i <= num2; i++) {
        result = num1 * i;
        if ((result % num2) == 0) {
            mmc = result;
            i = num2 + 1;
        }
    }

    return 0;
}
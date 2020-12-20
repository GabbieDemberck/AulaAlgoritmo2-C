/*Faça um algoritmo que leia N números inteiros até que a soma dos números digitados seja maior que 100,
 ao final divida o valor da soma pelo primeiro número digitado (se o primeiro número for zero, faça a divisão pelo número 10)*/
#include <stdio.h>
#include <math.h>

int main {

    int N,valorFinal,primeiroNumero;

    scanf("%N",&N);
    primeiroNumero = N;
    
    do{    
    valorFinal = valorFinal + N;
    scanf("%N",&N);
    }while(valorFinal <= 100);

    if(primeiroNumero == 0 ){
        primeiroNumero = primeiroNumero/10;
    }else{
        valorFinal = valorFinal/ primeiroNumero
    }


    return 0;
}
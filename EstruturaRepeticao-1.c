/*Faça um algoritmo que mostre o quadrado de todos os números do intervalo de 1 a X. 
Sendo X um número natural não nulo informado pelo usuário. Utilize o seguinte formato de saída de dados: 
O quadrado de 1 eh 1
O quadrado de 2 eh 4
e assim sucessivamente. O resultado deve ser uma apresentação de dados na forma de coluna.*/

#include <stdio.h>
#include <math.h>

int main {
    int x , y , i;
    scanf("%d",&x);
    if (x > 0){
        for( i==1 ; i<=x ; i++){
            y = i*i;
            printf("O quadrado de %d eh %d",i,y);
        }
    }

    return 0;
}
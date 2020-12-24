/*Faça um algoritmo que mostre uma tabela de valores correspondentes entre Graus Célsius e Graus Fahrenheit
. Por exemplo: 0 C = 32.00 F, 1 C = 33.80 F, e assim sucessivamente, até 100ºC.
 O resultado deve ser uma apresentação de dados na forma de coluna. Pesquise a fórmula de conversão.*/

#include <stdio.h>
#include <math.h>

int main () {
    int c;
    float  f; 
    for (c=0; c <= 100; c++){
        f=(c*1.800)+ 32.00;
        printf("\n%d C = %2.2f F",c,f);
    }

    return 0;
}
//esqueci o () no main , esqueci que a linguagem C usa pontos em
// números float
// esqueci de quebrar a linha no print
// especificar as duas casas decimais no printf
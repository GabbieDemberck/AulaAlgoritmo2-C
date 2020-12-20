/*Faça um algoritmo que mostre uma tabela de valores correspondentes entre centímetros e polegadas. Por
exemplo: 1 centimetro = 0,39 polegadas, e assim sucessivamente, até X centímetros. 
Sendo X um número natural não nulo informado pelo usuário. 
O resultado deve ser uma apresentação de dados na forma de coluna. Pesquise a fórmula de conversão.*/
#include <stdio.h>
#include <math.h>

int main {

    int centimetros = 1;
    int xcentimetros;
    float polegadas;

    scanf("%xcentimetros",&xcentimetros);
    
    while(centimetros <= xcentimetros){
        polegadas = polegadas + 0,39;
        printf("%f centimetros = %f", centimetros, polegadas);
        centimetros++;
    }
    return 0;
}
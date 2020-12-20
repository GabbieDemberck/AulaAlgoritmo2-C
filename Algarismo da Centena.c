#include <stdio.h>
#include <math.h>

int main()
{
    float valor;
    int numero;

    scanf("%d", &numero);
    valor = fmod(numero, 2);

    if (numero > 100 && numero < 900)
    {
        printf(valor == 0 ? "PAR" : "IMPAR");
    }
    else
    {
        printf("Numero Invalido");
    }
    return 0;
}

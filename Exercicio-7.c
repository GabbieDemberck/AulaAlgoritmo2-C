#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A, B, C, valor;
    scanf("%f %f %f", &A, &B, &C);

    if ((A == B) && (B == C))
    {
        printf("Iguais");
    }
    else
    {
        if (A > B)
        {
            valor = A;

            if (C > A)
                valor = C;
        }
        if ((C > B)&& (C > A)){
            valor = C;
        }else{
            if (B > A){
                valor = B;
            }
        }
            return 0;
    }
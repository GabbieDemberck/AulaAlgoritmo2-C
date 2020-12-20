#include <stdio.h>
#include <math.h>

int main ()
{
    float A, B, C;

    scanf("%f%f", &A, &B);
    C = fmod(A, B);
    printf((  C != 0 ? "Nao eh divisivel" : "Eh divisivel" ));
    
    return 0;
}
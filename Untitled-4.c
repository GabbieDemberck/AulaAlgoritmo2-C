#include <stdio.h>
#include <math.h>

int main()
{
    float rCilindro, aCilindro, vCilindro, pi;
    scanf("%f%f", &rCilindro, &aCilindro);
    pi = 3.14;
    vCilindro = pow(rCilindro, 2) * pi * aCilindro;
    printf("%.2f", vCilindro);

return 0;
}
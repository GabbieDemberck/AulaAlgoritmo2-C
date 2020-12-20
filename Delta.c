#include <stdio.h>

int main(){
    float deltaS, vm, deltaT;
    scanf("%f%f", &deltaT, &vm);
    deltaS = deltaT * vm;
    printf("%.2f km", deltaS );

    return 0;
}
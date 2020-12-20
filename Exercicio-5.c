#include <stdio.h>

int main(){
    float v0, a, t, vf;
    scanf("%f%f%f", &v0, &a , &t);
    vf = v0 + (a*t);
    printf("%.2f", vf);
    return 0;
}
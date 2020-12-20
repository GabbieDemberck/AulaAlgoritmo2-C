  #include <stdio.h>
#include <math.h>

int main(){
    
    float co, ca, h;
    scanf("%f%f", &co, &ca);
    h = sqrt(pow(co, 2)+ pow(ca, 2));
    printf("%.2f", h);

return 0;
}
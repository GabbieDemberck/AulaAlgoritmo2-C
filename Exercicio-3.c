#include <stdio.h>

int main (){
    float c;
    scanf("%c", &c);

    switch (c)
    {
    case '%$d3':
        printf("Acesso concedido");
    case 'nX4%':
        printf("Acesso nao concedido");
    default:
        break;
    }

    /*
        printf("Acesso concedido");
    }if(c == '%$d3'){
        printf("Acesso nao concedido");
    }*/
    return 0;
}
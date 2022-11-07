#include <stdio.h>

int intervalo(char n){
    int retorno=0;
    if(n>='a' && n<='z'){
        retorno=1;
    }
    return retorno;
}

int main()
{
    char n; int resultado;
    scanf ("%c",&n);
    resultado=intervalo(n);
    printf("%d",resultado);

    return 0;
}

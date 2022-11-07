#include <stdio.h>

void ciclo(int n,int limite){
    printf("\n%d",n);
    if(n<limite){
        ciclo(n+1,limite);
    }
}

int main()
{
    ciclo(2,10);

    return 0;
}

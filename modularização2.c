#include <stdio.h>

int fibonacci(int n){
    int t1=0, t2=1, prox,i;
    for(i=0;i<=n;i++){
        printf("%i ", t1);
        prox = t1+t2;
        t1=t2;
        t2=prox;
    }
    return prox;
}


int main()
{
    int aux, n;
    scanf ("%d",&n);
    aux=fibonacci(n);
    printf("%d",aux);
    return 0;
}

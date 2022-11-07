#include <stdio.h>
#include <locale.h>

int condicao (int a,int b,int c){
    int retorno=0;
    if((a+b)>c && (a+c)>b && (b+c)>a){
        retorno=1;
    }
    return retorno;
}

int tipo (int a,int b,int c){
    int retorno;
    if(a==b && a==c && b==c){
        retorno=1;//equilatero
    }
    if((a==b && c!=a && c!=b) || (a==c && b!=a && b!=c) || (b==c && a!=b && a!=c)){
        retorno=2;//isosceles
    }
    if(a!=b && a!=c && b!=c){
        retorno=3;//escaleno
    }
    return retorno;
}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int a,b,c,condicaoFinal; int tipoFinal;
    printf("Digite os três lados do triângulo:\n");
    scanf("%d%d%d",&a,&b,&c);
    condicaoFinal=condicao(a,b,c);
    tipoFinal=tipo(a,b,c);
    if(condicaoFinal==1){
        switch (tipoFinal){
            case 1:
            printf("\nTriângulo Equilátero");
            break;
            case 2:
            printf("\nTriângulo Isósceles");
            break;
            case 3:
            printf("\nTriângulo Escaleno");
            break;

        }
    }
    else{
        printf("\nNão é possível formar um triângulo com essas medidas.");
    }

    return 0;
}

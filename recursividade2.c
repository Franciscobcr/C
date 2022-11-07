
#include <stdio.h>
#include <locale.h>

int fatorial (int n) {
    int fat;
    if(n==0){
        fat=1;
    }
    else{
        fat=n*fatorial(n-1);
    }
    return fat;
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int n;
    printf("Digite o numero : ");
    scanf("%d", &n);
    while(n<0){
        printf("Apenas maiores ou iguais a 0.\nDigite novamente: ");
        scanf("%d", &n);
    }
    
    printf("Fatorial de %d é %d", n,fatorial(n));
    
}

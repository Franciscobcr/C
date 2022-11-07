#include <stdio.h>

typedef struct cliente{
    char nome[50];
    char cpf[15];
}CLIENTE;

typedef struct conta{
    int Conta;
    float saldo;
    CLIENTE dados;
}CONTA;

void imprimeCliente(CLIENTE c){
    printf("\nNome: %s\n",c.nome);
    printf("\nCPF: %s\n",c.cpf);
}

void imprimeConta(CONTA x){
    printf("\nConta: %d", x.Conta);
    printf("\nSaldo: %.2f", x.saldo);
    printf("\nNome: %s", x.dados.nome);
    printf("\ncpf: %s", x.dados.cpf);
}

int main(){
    CLIENTE c;
    CONTA c1;
    printf("Nome: "); scanf("%s",c.nome);
    printf("CPF: "); scanf("%s",c.cpf);
    printf("Conta: "); scanf("%d",&c1.Conta);
    printf("Saldo: "); scanf("%f",&c1.saldo);
    imprimeConta(c1);
    
    return 0;
    

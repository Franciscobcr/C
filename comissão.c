#include <stdio.h>

int main()
{
   
    float fixo,vendas, comissao, total;
    
    printf("Digite o salÃ¡rio do vendedor: ");
    scanf("%f",&fixo);
    printf("\nDigite o valor total das vendas: ");
    scanf("%f",&vendas);
    
    if(vendas<=1200){
        comissao=0.03*vendas;
    }
    else{
        comissao=0.05*vendas;
    }
    
    total=fixo+comissao;
    
    printf("O salario total do vendedor Ã© %.2f",total);
    
    return 0;
}

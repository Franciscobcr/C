#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float valormaca, total;
	int macas;
	
	printf("Digite o número de maçãs:\n");
	scanf("%d",&macas);
	
	if(macas<12){
		valormaca=1.30;
	}
	else{
		valormaca=1.00;
	}
	
	total=valormaca*macas;
	
	printf("\n\nValor da compra: %.2f", total);
	
	return 0;
}

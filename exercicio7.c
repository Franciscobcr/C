#include <stdio.h>
#define TAM 4

int main ()
{
    int hinfm;
	float h[TAM];
    int i;
    float menorh=0,maiorh=0,mediah=0;

    printf ("Entre com as alturas para preencher o array\n");
    for (i = 0;i<TAM;i++)
    {
        scanf("%f",&h[i]);
    }

    maiorh = h[0];
    menorh = h[0];

    for (int i=0;i<TAM;i++) 
    {
        mediah = mediah+h[i];
        if (menorh>h[i]){
            menorh=h[i];
        }
        if (maiorh<h[i])
		{
            maiorh=h[i];
        }
    }
    mediah = mediah/TAM;

    printf ("\n A altura media é %f",mediah);
    for(int i=0;i < TAM;i++)
    {
        if(h[i]<mediah)
        {
           hinfm = hinfm + 1;
        }
    }
    printf ("\nA menor altura é %f",menorh);
    printf ("\nA maior altura é %f",maiorh);
    printf ("\nQuantidade de pessoas com altura inferior a media é de %d",hinfm);

    return 0;
}

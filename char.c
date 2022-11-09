#include <stdio.h>
int imprime (char C, int x) {
    for (int l=1; l<=x; l++){
        for (int c=1; c<=l; c++){
            printf ("%c", C);
        }
        printf ("\n");
    }
    return (1+x)*x/2;
}

int main() {
    int qtde;
    qtde = imprime ('*',6);
    
    printf ("Foram impressos %d caracteres ",qtde);
    return 0;
}

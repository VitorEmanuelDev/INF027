//Ler um número inteiro e exibir o seu sucessor.

#include <stdio.h>

int main()
{
    int numero, sucessor;
    
    printf("Informe um número inteiro.\n");
    scanf("%d", &numero);

    sucessor = numero + 1;
    
    printf("O sucessor é %d.\n", sucessor);

    return 0;
}

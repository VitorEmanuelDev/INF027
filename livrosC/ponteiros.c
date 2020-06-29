/* ponteiros */

#include <stdio.h>

int main()
{
    int numero;
    int *ponteiro = NULL;
    
    printf("Informe um número inteiro:\n");
    scanf("%d", &numero);
    
    ponteiro = &numero;
    
    
    printf("\nO tamanho do ponteiro é de %d bytes.\n", sizeof(ponteiro));
    printf("Endereço de memória do ponteiro: %p.\n", ponteiro);//aqui estamos vendo o endereço do ponteiro em si com %p
    printf("Valor representado pelo ponteiro: %d.\n", *ponteiro);//o valor informado vai aparecer graças ao asterisco que é o indicador de que essa variável aponta para algo
    printf("Endereço de memória para o qual aponta: %p.\n", &ponteiro);//aqui vemos o endereço da variável numero graças ao &
    
    return 0;
    
}

/*Faça um programa em C que crie e inicialize um array de 20 posições de inteiros com 0 para
cada elemento. Imprima o vetor em seguida, indicando a posição e o valor na posição (um por
linha).*/

#include <stdio.h>

int main()
{
    int i, vetor[20]; 
    
    for(i = 0; i <= 19; i++){
        
        vetor[i] = 0;
        printf("\nvetor[%d] = %d", i, vetor[i]);
        
    }

    return 0;
}


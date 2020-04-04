/*Escreve uma função de busca seqüencial em C.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, valor, array[30];

    
    
    for(i = 0; i <= 30; i++){
        
        array[i] = rand() % 99;
        printf("%d ", array[i]);
        
    }
    
    printf("\nQual número do array deseja eliminar?\n");
    scanf("%d", &valor);
    
    for(i = 0; i <= 30; i++){
        
        if(valor == array[i]){
            
            printf("Valor '%d' encontrado na posição '%d'. ", array[i], i);
            break;
            
        }
        
    }

    return 0;
}

/*1 - Criar um código em C para ler um vetor real, de 10 posições e exibir os dados em
ordem inversa.*/

#include <stdio.h>
#define TAMANHO 10

int main(void){
    
    int array[TAMANHO];
    
    
    printf("Informe os valores do array:");
    
    for(int atual = 0; atual < TAMANHO; atual++){
        
        scanf("%d", &array[atual]);
        
    }
    
    printf("[ ");
    
    for(int atual = TAMANHO - 1; atual >= 0; atual--){
        
        if(atual == 0){
            
            printf("%d ", array[atual]);
            
        }else{
            
            printf("%d, ", array[atual]);
            
        }
        
    }
    
    printf("]");

}


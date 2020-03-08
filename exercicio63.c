/*
Escreva um programa que leia dois vetores de números reais de mesma dimensão (10
posições), e imprima o vetor resultante da soma destes vetores.
*/

#include <stdio.h>

int main()
{
    int i, array1[10], array2[10], array3[10];
    
    printf("Informe dez valores para o primeiro array.\n");
    
    for(i = 0; i < 10; i++){
        
        scanf("%d", &array1[i]);
        
    }
    
    printf("Informe dez valores para o segundo array.\n");
    
    for(i = 0; i < 10; i++){
        
        scanf("%d", &array2[i]);
        
    }
    
    for(i = 0; i < 10; i++){
        
        array3[i] = array1[i] + array2[i];
        
    }
    
    printf("Soma dos dois arrays.\n");
    
    for(i = 0; i < 10; i++){
        
        printf("%d ", array3[i]);
        
    }
    
    return 0;
}



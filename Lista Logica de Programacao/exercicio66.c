/*Faça um programa em C que copie o conteúdo de um vetor de 10 posições de inteiros em
um segundo vetor e imprima este último.*/

#include <stdio.h>

int main()
{
    int array1[10], array2[10], i; 
    
    printf("Informe o valor dos elementos do primeiro array.\n");
    
    for(i = 0; i < 10; i++){
        
        //array1[i] = i;
        scanf("%d", &array1[i]);
        
    }
    
    for(i = 0; i < 10; i++){
        
        array2[i] = array1[i];
        printf("%d ", array2[i]);
        
    }
    
    return 0;
}

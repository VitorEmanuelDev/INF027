/*Faça um programa em C para ler valores e armazená-los em uma matriz D 5 x 5. A seguir
o programa deverá calcular a soma dos valores que compõem a diagonal principal e a
diagonal secundária da matriz.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>//era para usar a função rand
#define size 5

int main()
{   
    int matrizA[size][size] = {
        
        {1,2,3,4,5},
        {2,5,5,5,5},
        {3,5,5,5,5},
        {4,5,5,5,5},
        {5,5,5,5,5}
        
    }; //matriz teste para não ter que informar cada valor
    
    int i, j, somaPrincipal = 0, somaSecundaria = 0;
    
    //na moral?!?!? use a matriz teste se não quiser informar os valores um por um
    
    //printf("Informe os valores dos elementos da matriz:\n");
    //
    //for (i = 0; i < size; i++){
    //    
    //    for (j = 0; j < size; j++){
    //        
    //        scanf("%d", &matrizA[i][j]);
    //            
    //    }
    //}
    
    printf("Matriz 5 x 5.\n\n");
    
    for(i = 0; i < size; i++){
            
        for(j = 0; j < size; j++){
            
            printf("%d ", matrizA[i][j]);
            
        }
        
        printf("\n");
            
    }
    
    
    for(i = 0; i < size; i++){
        
        somaPrincipal = somaPrincipal + matrizA[i][i];
        somaSecundaria = somaSecundaria + matrizA[i][size - i - 1];
        
    }
 
    printf("\nSoma da diagonal principal %d.\n", somaPrincipal);
    printf("Soma da diagonal secundária %d.\n", somaSecundaria);
    
    return 0;
    
}

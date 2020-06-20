/*Escrever um algoritmo e implementá-lo em linguagem C que leia uma matriz de valores
inteiros 6 por 6 e um valor inteiro qualquer, posteriormente multiplicar a matriz pelo
valor lido e colocar o resultado na própria matriz.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>//era para usar a função rand
#define size 6

int main()
{   
    int matrizA[size][size] = {
        
        {1,2,3,4,5,6},
        {2,5,5,5,5,6},
        {3,5,5,5,5,6},
        {4,5,5,5,5,6},
        {5,5,5,5,5,6},
        {6,5,5,5,5,6}
        
    }; //matriz teste para não ter que informar cada valor
    
    int i, j, numero;
    
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
    
    printf("Matriz 6 x 6.\n\n");
    
    for(i = 0; i < size; i++){
            
        for(j = 0; j < size; j++){
            
            printf("%d ", matrizA[i][j]);
            
        }
        
        printf("\n");
            
    }
    
    printf("\nNúmero a ser multiplicado por todos os valores da matriz.\n");
    scanf("%d", &numero );
    
    
    for(i = 0; i < size; i++){
        
        for(j = 0; j < size; j++){
        
            matrizA[i][j] = numero * matrizA[i][j];
            
        }
    
    }
 
    printf("\nMatriz 6 x 6 após a multiplicação por %d.\n\n", numero);
    
    for(i = 0; i < size; i++){
            
        for(j = 0; j < size; j++){
            
            printf("%d ", matrizA[i][j]);
            
        }
        
        printf("\n");
            
    }
    
    
    return 0;
    
}

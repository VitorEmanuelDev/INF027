/*Escrever um algoritmo e implementá-lo em linguagem C que leia duas matrizes de
valores inteiros 3 por 4 e crie uma terceira matriz, que seja a soma das duas primeiras, e
uma quarta, que seja a diferença entre a primeira e a segunda. Mostrar as matrizes lidas e
calculadas.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>//era para usar a função rand
#define size 4


int main()
{   
    int matrizA[size][size] = {
        
        {1,2,3,},
        {2,5,5,},
        {3,5,5,},
        {4,5,5,}
        
    }; 
    
    int matrizB[size][size] = {
        
        {3,2,3,},
        {1,7,4,},
        {6,5,6,},
        {4,9,8,}
        
    }; //matrizes teste para não ter que informar cada valor

    int i, j;
    int matrizSoma[size][size], matrizSubtracao[size][size];
    
    //na moral?!?!? use a matriz teste se não quiser informar os valores um por um
    
    //printf("Informe os valores dos elementos da matrizA:\n");
    //
    //for (i = 0; i < size - 1; i++){
    //    
    //    for (j = 0; j < size - 1; j++){
    //        
    //        scanf("%d", &matrizA[i][j]);
    //            
    //    }
    //}
    
    //printf("Informe os valores dos elementos da matrizB:\n");
    //
    //for (i = 0; i < size - 1; i++){
    //    
    //    for (j = 0; j < size - 1; j++){
    //        
    //        scanf("%d", &matrizB[i][j]);
    //            
    //    }
    //}
    
    printf("\nMatriz A:\n\n");
    
    for(i = 0; i < size - 1; i++){
            
        for(j = 0; j < size - 1; j++){
            
            printf("%d ", matrizA[i][j]);
            
        }
        
        printf("\n");
            
    }
    
    printf("\nMatriz B:\n\n");
    
    for(i = 0; i < size - 1; i++){
            
        for(j = 0; j < size - 1; j++){
            
            printf("%d ", matrizB[i][j]);
            
        }
        
        printf("\n");
            
    }
    
    printf("\nAdição das matrizes A e B:\n\n");
    
    for(i = 0; i < size - 1; i++){
            
        for(j = 0; j < size - 1; j++){
            
            matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
            printf("%d ", matrizSoma[i][j]);
            
        }
        
        printf("\n");
            
    }
    
    
    printf("\nSubtração das matrizes A e B:\n\n");
    
    for(i = 0; i < size - 1; i++){
            
        for(j = 0; j < size - 1; j++){
            
            matrizSubtracao[i][j] = matrizA[i][j] - matrizB[i][j];
            printf("%d ", matrizSubtracao[i][j]);
        }
        
        printf("\n");
            
    }
    
    return 0;
    
}

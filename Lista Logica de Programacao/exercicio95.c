/*Escrever um algoritmo e implementá-lo em linguagem C que linearize uma matriz de 6
por 6, colocando os valores contidos nela em um vetor de 36 elementos e mostrar o
conteúdo do vetor.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>//era para usar a função rand
#define size 6
#define tamanho 36

int main()
{   
    int matrizA[size][size] = {
        
        {1,2,3,4,5,6},
        {2,5,5,5,5,6},
        {3,5,5,5,5,6},
        {4,5,5,5,5,6},
        {5,5,5,5,5,6},
        {6,6,6,6,6,6}
        
    }; //matriz teste para não ter que informar cada valor

    int i, j, k, numero;
    int matrizLinear[tamanho];
    
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
    
    printf("Matriz 6 x 6 bidimensional.\n\n");
    
    for(i = 0; i < size; i++){
            
        for(j = 0; j < size; j++){
            
            printf("%d ", matrizA[i][j]);
            
        }
        
        printf("\n");
            
    }
    
    
    for(i = 0, k = 0; i < size; i++){
        
        for(j = 0; j < size; j++){
        
            matrizLinear[k] = matrizA[i][j];
            k++;
        }
    
    }
 
    printf("\nMatriz 6 x 6 linear.\n\n");
    
            
    for(k = 0; k < tamanho; k++){
        
        printf("%d ", matrizLinear[k]);
        
    }
    
    return 0;
    
}


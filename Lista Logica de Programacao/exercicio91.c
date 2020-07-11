/*Elabore um programa em C que leia valores inteiros para preencher uma matriz A 5 x 5.
Você deverá criar adicionalmente dois vetores de 5 elementos: somaLinhas e
somaColunas. Em cada posição do vetor somaLinhas deverá ser armazenada a soma da
linha correspondente na matriz A. Da mesma forma, em cada posição do vetor
somaColunas deverá ser armazenada a soma da coluna correspondente na matriz A.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>//era para usar a função rand
#define size 5

int main()
{   
    int matrizA[size][size];/* = {
        
        {1,2,3,4,5},
        {2,5,5,5,5},
        {3,5,5,5,5},
        {4,5,5,5,5},
        {5,5,5,5,5}
        
    };*/ //matriz teste para não ter que informar cada valor
    
    int somaLinhaArray[size], somaColunaArray[size];
    
    int i, j, somaLinha = 0, somaColuna = 0;
    
    //na moral?!?!? use a matriz teste se não quiser informar os valores um por um
    
    printf("Informe os valores dos elementos da matriz:\n");
    
    for (i = 0; i < size; i++){
        
        for (j = 0; j < size; j++){
            
            scanf("%d", &matrizA[i][j]);
                
        }
    }
    
    printf("Array da soma de cada linha da matriz:\n\n");
    //realizar soma dos valores linha por linha
    for(i = 0; i < size; i++){
        
        //printf("%d ", matrizA[i][j]);
        
        for(j = 0; j < size; j++){
        
            //printf("%d ", matrizA[i][j]);
            somaLinha += matrizA[i][j];
            
        }
        
        somaLinhaArray[i] = somaLinha;
        printf("Soma da linha %d -> %d\n", i+1, somaLinhaArray[i]);
        somaLinha = 0;
        
    }
    
    printf("\n");
    
    printf("Array da soma de cada coluna da matriz:\n\n");
    //realizar soma dos valores coluna por coluna
    for(j = 0; j < size; j++){
        
        //printf("%d ", matrizA[i][j]);
        
        for(i = 0; i < size; i++){
        
            //printf("%d ", matrizA[i][j]);
            somaColuna += matrizA[i][j];
            
        }
        
        somaColunaArray[j] = somaColuna;
        printf("Soma da coluna %d -> %d\n", j+1, somaColunaArray[j]);
        somaColuna = 0;
        
    }
    
    return 0;
    
}


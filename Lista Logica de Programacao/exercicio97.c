/*Escrever um algoritmo e implementá-lo em linguagem C que leia uma matriz de valores
inteiros 5 por 5 e a exiba. A seguir, leia dois números x e y e em seguida troque a x-
ésima linha pela y-ésima linha, a x-ésima coluna com a y-ésima coluna, a diagonal
principal com a secundária e, por fim mostre a matriz assim modificada.*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>//era para usar a função rand
#define size 5

int main()
{   
    int matrizA[size][size] = {
        
        {1,2,3,4,5},
        {2,5,5,5,5},
        {1,2,3,4,3},
        {4,5,5,5,5},
        {5,4,3,4,8}
        
    }; //matriz teste para não ter que informar cada valor
    
    int i, j, numeroX, numeroY, auxLinhas = 0, auxColunas = 0, auxDiagonais = 0;
    
    //na moral?!?!? use a matriz teste se não quiser informar os valores um por um
    
    //printf("Informe o valor dos elementos da matriz:\n");
    //
    //for (i = 0; i < size; i++){
    //    
    //    for (j = 0; j < size; j++){
    //        
    //        scanf("%d", &matrizA[i][j]);
    //            
    //    }
    //}
    
    printf("Matriz original.\n");
    
    for(i = 0; i < size; i++){
            
        for(j = 0; j < size; j++){
            
            printf("%d ", matrizA[i][j]);
            
        }
        
        printf("\n");
            
    }
    
    printf("\nInforme dois números que irão corresponder a duas linhas e a duas colunas que serão trocadas.\n");
    printf("Lembre-se: 0 = linha 1.\n");
    scanf("%d%d", &numeroX, &numeroY);
    
    
    for(i = 0; i < size; ++i){
        
        auxLinhas = matrizA[numeroX][i];
        matrizA[numeroX][i] = matrizA[numeroY][i];
        matrizA[numeroY][i] = auxLinhas;
        
    }
    
    printf("\nLinhas trocadas.\n");
    
    for(i = 0; i < size; i++){
            
        for(j = 0; j < size; j++){
            
            printf("%d ", matrizA[i][j]);
            
        }
        
        printf("\n");
            
    }
    
    for(i = 0; i < size; ++i){
        
        auxColunas = matrizA[i][numeroX];
        matrizA[i][numeroX] = matrizA[i][numeroY];
        matrizA[i][numeroY] = auxColunas;
        
    }
    
    printf("\nColunas trocadas.\n");
    
    for(i = 0; i < size; i++){
            
        for(j = 0; j < size; j++){
            
            printf("%d ", matrizA[i][j]);
            
        }
        
        printf("\n");
            
    }
    
    for(i = 0; i < size; ++i){
        
        auxDiagonais = matrizA[i][i];
        matrizA[i][i] =  matrizA[i][size - i - 1];;
        matrizA[i][size - i - 1] = auxDiagonais;
        
    }
    
    printf("\nDiagonais trocadas.\n");
    
    for(i = 0; i < size; i++){
            
        for(j = 0; j < size; j++){
            
            printf("%d ", matrizA[i][j]);
            
        }
        
        printf("\n");
            
    }
    
    return 0;
    
}

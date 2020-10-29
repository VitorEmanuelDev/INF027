/*4 – Criar um código em C para gerar uma matriz [4X4].
A partir dessa matriz, gerar uma segunda matriz de mesma dimensão, cujos elementos
sejam o dobro do respectivo elemento da primeira. Ex.: V2[i] = 2 * V1[i].
Ao final, deverão ser exibidas as duas matrizes em coluna e linha.*/

#include <stdio.h>
#define TAMANHO 4  

int main(void){
    
    int matriz1[TAMANHO][TAMANHO] = {{7,6,5,2},
                                     {3,5,4,7},
                                     {4,2,3,4},
                                     {4,1,2,5}};
    int matriz2[TAMANHO][TAMANHO];
                          
    printf("Matriz original\n");                 
    for(int linha = 0; linha < TAMANHO; linha++){
        
        printf("[ ");
        for(int coluna = 0; coluna < TAMANHO; coluna++){
        
            printf("%d ", matriz1[linha][coluna]);
        
        }
        printf("]\n");
        
    }
    
    printf("\nMatriz dobrada\n");                 
    for(int linha = 0; linha < TAMANHO; linha++){
        
        printf("[ ");
        for(int coluna = 0; coluna < TAMANHO; coluna++){
        
            matriz2[linha][coluna] = matriz1[linha][coluna] * 2;
            printf("%d ", matriz2[linha][coluna]);
        
        }
        printf("]\n");
        
    }

    
}

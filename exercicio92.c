/*Elabore um programa em C, para ler valores e armazená-los em uma matriz 5 x 5. Após o
programa deverá responder se a matriz é ou não uma matriz simétrica. Uma matriz
simétrica possui a mesma composição de valores abaixo e acima da diagonal principal.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>//era para usar a função rand
#include <stdbool.h>
#define size 5

int main()
{
    
   /* int matrizA[size][size] = {
        
        {1,2,3,4,5},
        {2,5,5,5,4},
        {3,5,5,5,3},
        {4,5,5,5,2},
        {5,4,3,2,1}
        
    };*///matriz teste
    
    int matrizA[size][size];  // matriz original
    int matrizB[size][size];  // cópia

    int i, j;
    bool simetrica;
    
    //Coloque os 25 valores um por um ou comente esse bloco e use a matriz teste para ser mais rápido.
    printf("Informe os elementos da matriz: \n");
    for(i = 0; i < size; i++){
    
        for(j = 0; j < size; j++){
    
            scanf("%d", &matrizA[i][j]);
    
        }
        
    }

    //Copiar a matriz de maneira inversa. Colocando linhas no lugar de colunas
    for(i = 0; i < size; i++){
        
        for(j = 0; j < size; j++){
            
            matrizB[i][j] = matrizA[j][i];
            
        }
        
    }

    //Verificar se mesmo após a cópia inversa, as matrizes continuam idênticas
    simetrica = true;
    
    for(i = 0; i < size; i++){
        
        for(j = 0; j < size; j++){
            
            if(matrizA[i][j] != matrizB[i][j]){
                
                simetrica = false;
                break;
                
            }
            
        }
        
    }

    //mostrar na tela se a matriz é de fato idêntica ou se em algum momento a verificação anterior mudou para false
    if(simetrica == true){
        
        printf("\nA matriz informada é simetrica.\n\n");

        for(i = 0; i < size; i++){
            
            for(j = 0; j < size; j++){
                
                printf("%d ", matrizA[i][j]);
                
            }

            printf("\n");
            
        }
        
    }else{
        
        printf("\nA matriz informada não é simetrica.");
        
    }

    return 0;
    
}



/*2 – Sabendo que as operações com vetores são efetuadas dos modos mostrados a
seguir:

Soma de vetores: V1[i] + V2[i];
Subtração de vetores: V1[i] - V2[i];
Multiplicação de vetor por um número: V1[i] * x;
Divisão de vetor por um número: V1[i] / x;
Potenciação de vetor por um número: V1[i] ^ x; (Use a função potência do C)

Criar um código em C que receba os valores de entrada dos vetores e dos outros
operadores (se for o caso), informar a operação desejada e os dados resultantes.
Se a operação escolhida for Soma ou Subtração de vetores, ambos os vetores deverão
ser exibidos. Se a operação for Multiplicação, Divisão e Potenciação deverá ser exibido o
vetor e operando.*/

#include <stdio.h>
#include <math.h>
#define TAMANHO 50

int main(void){
    
    int array1[TAMANHO];
    int array2[TAMANHO];
    int array3[TAMANHO];
    int tamanho;
    int operando;
    
    int operacao;
    printf("Qual operação deseja realizar?\n");
    printf("Soma: 1\n");
    printf("Subtração: 2\n");
    printf("Multiplicação: 3\n");
    printf("Divisão: 4\n");
    printf("Potenciação: 5\n");
    scanf("%d", &operacao);
    
    if(operacao == 1 || operacao == 2){
        
        printf("Quantas posições seus arrays vão ter?\n");
        scanf("%d", &tamanho);
        
        printf("Informe os valores do primeiro array:\n");
        for(int atual = 0; atual < tamanho; atual++){
            
            scanf("%d", &array1[atual]);
            
        }
        
        printf("Informe os valores do segundo array:\n");
        for(int atual = 0; atual < tamanho; atual++){
            
             scanf("%d", &array2[atual]);
            
        }
        
        if(operacao == 1){
            
            for(int atual = 0; atual < tamanho; atual++){
            
                array3[atual] = array1[atual] + array2[atual];
            
            }
            
            printf("Array 1\n");
            
            printf("[ ");
            for(int atual = 0; atual < tamanho; atual++){
            
                printf("%d ", array1[atual]);
            
            }
            printf("]\n");
            
            printf("\nArray 2\n");
            
            printf("[ ");
            for(int atual = 0; atual < tamanho; atual++){
            
                printf("%d ", array2[atual]);
            
            }
            printf("]\n");
            
            printf("\nArray soma\n");
            
            printf("[ ");
            for(int atual = 0; atual < tamanho; atual++){
            
                printf("%d ", array3[atual]);
            
            }
            printf("]");
            
        }
        
        if(operacao == 2){
            
            for(int atual = 0; atual < tamanho; atual++){
            
                array3[atual] = array1[atual] - array2[atual];
            
            }
            
            printf("Array 1\n");
            
            printf("[ ");
            for(int atual = 0; atual < tamanho; atual++){
            
                printf("%d ", array1[atual]);
            
            }
            printf("]\n");
            
            printf("\nArray 2\n");
            
            printf("[ ");
            for(int atual = 0; atual < tamanho; atual++){
            
                printf("%d ", array2[atual]);
            
            }
            printf("]\n");
            
            printf("\nArray subtração\n");
            
            printf("[ ");
            for(int atual = 0; atual < tamanho; atual++){
            
                printf("%d ", array3[atual]);
            
            }
            printf("]");
            
        }
        
    }
    
    if(operacao == 3 || operacao == 4 || operacao == 5){
        
        printf("Quantas posições seu array vai ter?\n");
        scanf("%d", &tamanho);
        
        printf("Informe os valores do seu array:\n");
        for(int atual = 0; atual < tamanho; atual++){
            
            scanf("%d", &array1[atual]);
            
        }
        
        printf("Qual o operando?");
        scanf("%d", &operando);
        
        if(operacao == 3){
            
            for(int atual = 0; atual < tamanho; atual++){
            
                array3[atual] = array1[atual] * operando;
            
            }
            
            printf("Array 1\n");
            printf("[ ");
            for(int atual = 0; atual < tamanho; atual++){
            
                printf("%d ", array1[atual]);
            
            }
            printf("]\n");
            
            printf("\nArray multiplicação\n");
            
            printf("[ ");
            for(int atual = 0; atual < tamanho; atual++){
            
                printf("%d ", array3[atual]);
            
            }
            printf("]\n");
            
            printf("\nOperando = %d", operando);
            
        }
        
        if(operacao == 4){
            
            for(int atual = 0; atual < tamanho; atual++){
            
                array3[atual] = array1[atual] / operando;
            
            }
            
            printf("Array 1\n");
            printf("[ ");
            for(int atual = 0; atual < tamanho; atual++){
            
                printf("%d ", array1[atual]);
            
            }
            printf("]\n");
            
            printf("\nArray divisão\n");
            
            printf("[ ");
            for(int atual = 0; atual < tamanho; atual++){
            
                printf("%d ", array3[atual]);
            
            }
            printf("]\n");
            
            printf("\nDivisor = %d", operando);
            
        }
        
        if(operacao == 5){
            
            for(int atual = 0; atual < tamanho; atual++){
                
                array3[atual] = pow(array1[atual], operando);
            
            }
            
            printf("[ ");
            for(int atual = 0; atual < tamanho; atual++){
            
                printf("%d ", array1[atual]);
            
            }
            printf("]\n");
            
            printf("Array potenciação\n");
            
            printf("[ ");
            for(int atual = 0; atual < tamanho; atual++){
            
                printf("%d ", array3[atual]);
            
            }
            printf("]\n");
            
            printf("\nExpoente = %d", operando);
            
        }
        
    }
    
}

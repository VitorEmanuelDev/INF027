/*Sabendo que um triângulo é uma figura geométrica
de três lados onde cada um dos lados é menor que a
soma dos outros dois, escreva um programa em C, que
receba três valores e verifique e imprima se eles podem
ser os comprimentos dos lados de um triângulo.*/

#include <stdio.h>

int main()
{
    int a, b, c;
    
    printf("Informe o tamanho dos três lados.\n");
    scanf("%d%d%d", &a, &b, &c);
    
if (a < b + c && b < a + c && c < a + b){
        
        printf("É um triângulo.");
        
    } else {
        
        printf("Não é um triângulo.");
        
    }

    return 0;
}

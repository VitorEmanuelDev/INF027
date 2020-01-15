/*Números quadrados perfeitos são aqueles cuja
raiz quadrada é um número inteiro. Fazer um algoritmo
que dado um número inteiro positivo, calcule se ele é
ou não um quadrado perfeito.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int num, raiz;
    
    printf("Informe um número.\n");
    scanf("%d", &num);
    
    raiz =  sqrt(num);
    
    if (num < 0){
        
        printf("Número inválido. Tente novamente.");
        
    } else if( num%raiz == 0 && pow(raiz, 2) == num){
        
        printf("O número %d é um quadrado perfeito.\n", num);
        
    } else {
        
        printf("O número %d não é um quadrado perfeito.\n", num);
        
    }

    return 0;
}

/*Sendo S = 1 + (1/2²) + (1/3³) + (1/N^N) um somatório de N (informado pelo
usuário) termos, escreva um programa para calcular S para um número N.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int contador, numero = 1;
    float soma, N, somaFinal;
    
    printf("Informe um número N.\n");
    scanf("%f", &N);
    
    for(contador = 1; contador <= N; contador++, numero++){
        
        soma += 1/pow(numero,numero); 
        
    }
    
    printf("%f", soma);

    return 0;
}


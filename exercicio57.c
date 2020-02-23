/*Sendo S = 1 + (1/2²) + (1/3³) + (1/N^N) um somatório de N (informado pelo
usuário) termos, escreva um programa para calcular S para um número N.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int contador, numero = 2;
    float soma, N, somaFinal;
    
    printf("Informe um número N.\n");
    scanf("%f", &N);
    
    for(contador = 1; contador <= N; contador++, numero++){
        
        soma += 1/pow(numero,numero); 
        
    }
    
    somaFinal = 1 +soma;
    
    printf("%f", somaFinal);

    return 0;
}

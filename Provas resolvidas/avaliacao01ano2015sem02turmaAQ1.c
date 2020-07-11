/*
Você precisa construir um programa que possa ser utilizado em bares e restaurantes.
O objetivo do programa é calcular o valor da conta por pessoa, incluindo neste valor
os 10% de taxa de serviço.  

a) Identifique qual(is) é/são a(s) entrada(s) necessária(s)
para este algoritmo e o tipo adequado para representar esta(s) entrada(s).

b) Identifique qual(is) é/são a(s) saída(s) deste algoritmo e o tipo adequado
para representar esta(s) saída(s).

c) Escreva um programa em C que implemente o algoritmo que resolve este problema. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pessoas;
    float valor, valorPessoa;
    
    printf("Quantas pessoas foram servidas?\n");
    scanf("%d", &pessoas);

    printf("Informe o valot total.\n");
    scanf("%f", &valor);
    
    valorPessoa = (valor*1.1)/pessoas;
    
    printf("Cada pessoa deverá pagar: R$ %.2f", valorPessoa);
    
    return 0;
}

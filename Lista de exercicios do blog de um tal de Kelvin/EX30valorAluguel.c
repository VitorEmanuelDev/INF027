/*Uma autolocadora aluga seus carros com uma taxa fixa por dia, uma taxa 
por Km rodado e desconto de 10% na taxa fixa de aluguel por dia. Escrever
um algoritmo que lê a taxa fixa por dia,a taxa por Km rodado, o número de dias, 
o número de quilômetro rodado e calcular e escrever o valor total do aluguel e
o valor do desconto*/

#include <stdio.h>

int main()
{
    float taxaFixa, taxaKm, desconto, dias, KmRodados, valorAluguel;
    
    printf("Informe o número de dias:\n");
    scanf("%f", &dias);
    
    printf("Informe a taxa fixa diária:\n");
    scanf("%f", &taxaFixa);
    
    printf("Informe a taxa fixa por Km:\n");
    scanf("%f", &taxaKm);
    
    printf("Informe a quantidade de Km percorridos:\n");
    scanf("%f", &KmRodados);
    
    desconto = taxaFixa * 0.9;
    
    valorAluguel = (desconto * dias) + (KmRodados * taxaKm);
    
    printf("O valor do aluguel foi de R$ %.2f\n", valorAluguel);
    
    printf("O valor da taxa fixa por Km ficou em R$ %.2f após o desonto", desconto);
    
    return 0;
}

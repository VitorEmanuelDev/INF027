/*Escrever um algoritmo que lê o público total
de futebol e fornecer a renda do jogo, sabendo-se
que havia 4 tipos de ingressos assim distribuídos:
popular 10% a R$1,00, geral 50% a R$5,00, arquibancada
30% a R$10,00 e cadeiras 10% a R$ 20,00.*/

#include <stdio.h>

int main()
{
    float publico, popular = 0.1, geral = 0.5, arquibancada = 0.3, cadeiras = 0.1, renda; 
    
    printf("Qual o público pagante?\n");
    scanf("%f", &publico);
    
    renda = (publico * popular * 1) + (publico * geral * 5) + (publico * arquibancada * 10) + (publico * cadeiras * 20);

    printf("A renda do jogo foi de R$ %.2f", renda);
    
    return 0;
}

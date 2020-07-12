/*Escrever um algoritmo que lê a taxa de consumo
de potência elétrica de um refrigerador, o tempo
em horas que permaneceu ligado e o valor do quilowatt
hora e calcular e escrever a energia total gasta pelo
refrigerador, bem como, o valor a ser pago á companhia de Energia Elétrica.*/

#include <stdio.h>

int main()
{
    float KwHora, Watts,tempoHoras, valorKwHora, valorPagar;
    
    printf("Informe o consumo em Watts:\n");
    scanf("%f", &Watts);

    printf("Informe o tempo de uso em horas:\n");
    scanf("%f", &tempoHoras);
    
    printf("Informe o valor do kW/h:\n");
    scanf("%f", &valorKwHora);
    
    KwHora = (Watts * tempoHoras)/1000;
    
    valorPagar = KwHora * valorKwHora;
    
    printf("O valor a ser pago para a Coelba é de R$ %.2f", valorPagar);
    
    return 0;
}

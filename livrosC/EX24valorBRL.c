/*Escrever um algoritmo que lê o valor de uma
compra em dólares, a taxa do dólar no dia da compra,
o percentual de ICMS e o percentual de lucro da empresa,
e calcular e escrever o valor a ser pago em reais, sabendo-se
que o percentual de lucro e o percentual de ICMS incidem sobre
o valor em reais.*/

#include <stdio.h>

int main()
{
    float compraUSD, valorBRL, ICMS, lucroPercent, valorPagar, precoUSD;
    
    printf("Informe o valor da compra em USD.\n");
    scanf("%f", &compraUSD);
    
    printf("Informe a taxa de ICMS.\n");
    scanf("%f", &ICMS);
    
    printf("Informe o percentual de lucro da empresa.\n");
    scanf("%f",&lucroPercent);
    
    printf("Qual o valor do USD em BRL?\n");
    scanf("%f", &precoUSD);
    
    valorBRL = compraUSD * precoUSD;
    
    valorPagar = (valorBRL * (ICMS/100)) + (valorBRL * (lucroPercent/100)) + valorBRL;
    
    printf("O valor a pagar é de R$ %.2f", valorPagar);
    
    return 0;
}

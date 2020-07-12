/*Escrever um algoritmo que lê:
– A porcentagem do IPI a ser acrescido no valor das peças;
– O código da peça 1, valor unitário da peça 1, quantidade de peças 1;
– O código da peça 2, valor unitário da peça 2, quantidade de peças 2;
O algoritmo deve calcular o valor total a ser pago e apresentar o resultado.*/

#include <stdio.h>
#include <math.h>

int main()
{
    float ipi, valor1, quant1, valor2, quant2, total, cod1, cod2;
    
    printf("Informe o IPI a ser acrescido ex: 25.\n");
    scanf("%f", &ipi);
    
    printf("Informe o código do primeiro produto.\n");
    scanf("%f", &cod1);
    
    printf("Informe o código do segundo produto.\n");
    scanf("%f", &cod2);
    
    printf("Informe o valor do primeiro produto.\n");
    scanf("%f", &valor1);
    
    printf("Informe o valor do segundo produto.\n");
    scanf("%f", &valor2);
    
    printf("Informe quantas unidades do primeiro produto estão sendo compradas.\n");
    scanf("%f", &quant1);
    
    printf("Informe quantas unidades do segundo produto estão sendo compradas.\n");
    scanf("%f", &quant2);
    
    total = ((ipi/100) + 1) * (valor1 * quant1 + valor1 * quant1);
    
    printf("O preço total é de R$ %.2f \n", total);
    
    return 0;
}

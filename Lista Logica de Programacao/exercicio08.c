//Dado que a fórmula para conversão de Fahrenheit para Celsius é C = 5/9 (F – 32), leu um valor de temperatura em Fahrenheit e exibi-lo em Celsius

#include <stdio.h>

int main()
{
    float farenheit;
    float celsius;
    
    printf("Informe um valor em Farenheit.\n");
    scanf("%f", &farenheit);
    
    celsius = ((farenheit - 32)*5)/9;
    
    printf("A temperatura em celsius é de C° %.1f.", celsius );

    return 0;
}

/*Valor absoluto / Absolute value */

#include <stdio.h>

float valoAbsoluto(float x);

int main()
{
    float valor;
    float absoluto = 0.0;
    
    printf("Informe um número para encontrarmos o valor absoluto dele:\n");
    scanf("%f", &valor);
    
    absoluto = valoAbsoluto(valor);
   
    printf("Valor absoluto: %.1f", absoluto);

    return 0;

    
}


float valoAbsoluto(float x){
    
    if(x < 0)
    x = x * -1;
    
    return x;
    
}

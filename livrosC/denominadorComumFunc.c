/* Denominador comum / Commom denominator*/

#include <stdio.h>
#include <stdlib.h>

int denominador(int num1, int num2);

int main()
{
    
    int resultado = 0, num1, num2;
    
    printf("Informe dois números inteiros para encontrarmos o denominador comum:\n");
    scanf("%d%d", &num1, &num2);
    
    resultado = denominador(num1, num2);
    
    printf("O denominador comum de 150 e de 35 é %d.",  resultado);
    
    return 0;
}

int denominador(int num1, int num2){
    
    int aux;
    
    while(num2 != 0){
        
        aux = num1 % num2;
        num1 = num2;
        num2 = aux;
        
    }
    
    return num1;
    
}

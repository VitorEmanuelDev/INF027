//Escreva um programa que leia um numero inteiro positivo e apresente o quadrado e a raiz quadrada desse numero

#include <stdio.h>
#include <math.h>

int main()
{
    
    //o tipo de variável afeta a computação no if
    float numero, raiz, quadrado;
    
    printf("Informe um numero inteiro e positivo\n");
    scanf("%f", &numero);
    
    if (numero < 0 || numero != (int)numero ){
        
        printf("Reinicie o programa e digite um numero inteiro e positivo\n");
        
    } else {
        
        //quadrado = numero * numero;
        quadrado = pow(numero, 2);
        printf("O quadrado do numero %.2f eh %.2f\n", numero, quadrado);
        
        raiz = sqrt(numero);
        printf("A raiz quadrada de %.2f eh igual a %.2f\n", numero, raiz);
        
    }
    
    return 0;
}

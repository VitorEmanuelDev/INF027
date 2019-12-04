//Escreva um programa que calcule a raiz de uma equação do primeiro grau.

#include <stdio.h>
#include <stdlib.h>


float main()
{
    float a, b, c, raiz;
    
    printf("Sendo ax + b = c. Informe o valor de a, de b e de c.\n");
    scanf("%f %f %f", &a, &b, &c);
    
    raiz = (c - b)/a;
    
    printf("A raiz é igual a: %.2f", raiz);
    
    
    return 0;
}

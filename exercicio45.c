/*Escreva um programa que leia 5 números, e imprima a média entre eles.*/

#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, num5;
    float media;
    
    printf("Informe cinco números:\n");
    scanf("%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5);
    
    media = (num1+num2+num3+num4+num5)/5;
    
    printf("média = %.2f", media);

    return 0;
}

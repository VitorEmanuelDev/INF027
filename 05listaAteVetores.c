/*5-Fazer um programa que calcule e escreva a seguinte soma: ((2^1)/50) + ((2^n+1)/n-1)*/

#include <stdio.h>
#include <math.h>

int main()
{
    int i = 1;
    float soma = 0;
        
    for(i = 1; i <= 50; i++){

        soma += pow(2,i)/(51 - i);
        //printf("Soma: %f\n", soma);
    
    }
    
    printf("Soma: %f\n", soma);

    return 0;
}

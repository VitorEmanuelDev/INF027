/*Desenvolver um algoritmo para ler um número “x”
e calcular e imprimir o valor de “y” de acordo com
as condições abaixo:
y = x , se x < 1;
y = 0 , se x = 1;
y = x² , se x > 1;*/

#include <stdio.h>
#include <math.h>

int main()
{
    float x, y;
    
    printf("Informe o valor de x.\n");
    scanf("%f", &x);
    
    if (x < 1) {
        
       y = x;
       printf("O valor de y é igual a %.2f", y);
    
    } else if (x == 1) {
        
        y = 0;
        printf("O valor de y é igual a %.2f", y);
        
    } else {
        
        y = x * x; // y = pow(x,2);
        printf("O valor de y é igual a %.2f", y);
        
    }

    return 0;
}


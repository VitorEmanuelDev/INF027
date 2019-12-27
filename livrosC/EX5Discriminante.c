/*Fazer um programa para ler os valores dos
coeficientes A, B e C de uma equação quadrática
e calcular e imprimir o valor do discriminante (delta)*/

#include <stdio.h>
#include <math.h>

int main()
{
    int A, B, C, Delta;
    
    printf("Informe o coeficiente A.\n");
    scanf("%d", &A);
    printf("Informe o coeficiente B.\n");
    scanf("%d", &B);
    printf("Informe o coeficiente C.\n");
    scanf("%d", &C);
    
    Delta = pow(B, 2) - 4*A*C;
    
    printf("O discriminante é %d.", Delta);

    return 0;
}

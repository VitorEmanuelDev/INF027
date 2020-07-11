/*Fazer um algoritmo que leia três números inteiros
positivos (A, B e C) e calcular e imprmir o valor de D.

D = (R + S)/2 

R = (A + B)² 

S = (B + C)²

*/

#include <stdio.h>
#include <math.h>

int main()
{
    float R, S, r, s, A, B, C, D;
    
    printf("Informe o valor dos números A, B e C.\n");
    scanf("%f%f%f", &A, &B, &C);
    
    r = A + B; 
    s = B + C;
    
    R = pow(r, 2);
    S = pow(s, 2);
    
    D = (R + S)/2;
    
    printf("O valor de D é %.2f", D);

    return 0;
}

/*Escreva um programa em C, que leia a probabilidade
de dois eventos independentes acontecerem. Em seguida,
o programa deverá calcular e imprimir a probabilidade de
um dos dois eventos ocorrer, bem como dos dois eventos
acontecerem. A probabilidade é dada pelas formulas abaixo:
P(A e B) = P(A) x P(B)
P(A ou B) = P(A) + P(B) - P(A e B) 
*/

#include <stdio.h>

int main()
{
    float A, B, Pe, Pou;
    
    printf("Informe a probabilidade de A e a probabilidade de B.\n");
    scanf("%f%f", &A, &B);
    
    if (A < 0 || B < 0 || A > 100 || B > 100 || A + B > 100){
        
        printf("Valor inválido.");
        
    }
    
    Pe = (A * B)/100;
    Pou = (A + B - (A * B/100));
    
    printf("A probabilidade de ambos os eventos ocorrerem é de %.2f\n", Pe);
    printf("A probabilidade de um dos eventos ocorrer é de %.2f\n", Pou);
    
    return 0;
}

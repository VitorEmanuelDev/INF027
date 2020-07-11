/*Escreva um programa que calcule o quociente da divisão
de A por B (número inteiros e positivos), ou seja, A / B,
através de subtrações sucessivas. Esses dois valores são 
passados pelo usuário através do teclado.
*/

#include <stdio.h>

int main()
{
    int A, B, i, a;
    
    printf("Informe o dividendo 'A' e o divisor 'B'(sendo A > B):\n");
    scanf("%d%d", &A, &B);

    if(A < 0 || B < 0 || A < B){
        
        printf("Quociente inválido. Informe números positivos (sendo A > B).\n");
        
    }

    i = 0;
    a = A;

    while (a >= B) {
        
        a = a - B;
        
        i++;
    }

    printf("%d dividido por %d é igual a %d", A, B, i);

    return 0;
}

/*A série de Fibonacci é formada pela sequencia:

1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...

Escreva um programa que gere a série de FIBONACCI até o N-ésimo termo (com N
sendo uma entrada do algoritmo).*/

#include <stdio.h>

int main()
{
    int limite, contador, a = 1, b = 1, c;
    
    printf("Informe um número limite:\n");
    scanf("%d", &limite);

    for (contador = 1; contador <= limite; contador++){
        
        printf("%d ", a);
        
        c = a + b;
        
        a = b;
        
        b = c;
    }

    return 0;
}

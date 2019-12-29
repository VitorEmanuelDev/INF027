/*Fazer um algoritmo que dados os 4 elementos de uma matriz 2 x 2.
Calcule e escreva o valor do determinante desta matriz.
ex:

DetA =   2 9
        -1 6

Diagonal principal: 2 * 6 = 12
Diagonal secundária: 9 * (–1) = – 9

DetA = 12 – (–9)
DetA = 12 + 9
DetA = 21

*/
#include <stdio.h>

int main()
{
    int e1, e2, e3, e4, det;
    
    printf("Informe os quatro elementos da matriz.\n");
    scanf("%d%d%d%d", &e1, &e2, &e3, &e4);
    
    det = (e1 * e4) - (e3 * e2);
    
    printf("O determinante da matriz informada é %d.", det);

    return 0;
}

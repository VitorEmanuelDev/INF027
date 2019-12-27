/*
Teorema de Pitágoras: H² = L1² + L2² .
Tem uma infinidade de números com essa combinação.
Dado dois números inteiros positivos, M e N, onde M>N,
desenvolver um algoritmo para entrar com dois números 
positivos e fornecer os valores dos lados e da Hipotenusa
do triângulo gerados combinando M e N.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int ladoM, ladoN, HipotenusaAoQuadrado, Hipotenusa;
    
    printf("Informe o lado M e o lado N. Lembre-se que M > N e nenhum dos dois pode ser negativo.\n");
    scanf("%d", &ladoM);
    scanf("%d", &ladoN);
    
    if( ladoM > ladoN && (ladoM && ladoN) > 0) {
        
        HipotenusaAoQuadrado = pow(ladoM, 2) + pow(ladoN, 2);
        
        Hipotenusa = sqrt(HipotenusaAoQuadrado);
        
        printf("A hipotenusa mede %d cm.", Hipotenusa);
        
    } else {
        
        printf("...\n");
        printf("Dá para respeitar a p&!#@ da instrução?! Obrigada(o)!");
        
    }

    return 0;
}

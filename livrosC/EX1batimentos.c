/*O coração humano bate em média uma vez por segundo.
Desenvolver um algoritmo para calcular e escrever quantas
vezes o coração de uma pessoa baterá se viver X anos.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int batimentosAno = 60*60*24*365.25, anos, batimentosTotais;
    
    printf("Quantos anos a pessoa tem?\n");
    scanf("%d", &anos);
    
    batimentosTotais = anos * batimentosAno;
    
    printf("A pessoa teve cerca de %d batimentos cardíacos em %d anos.", batimentosTotais, anos);
    
    return 0;
}

/*Fazer um algoritmo que:

• Leia um número indeterminado de linhas contendo cada uma a
idade de um indivíduo. A última linha, que não entrara nos cálculos,
contem o valor da idade igual a zero.

• Calcule e escreva a idade média deste grupo de indivíduos.*/

#include <stdio.h>

int main()
{
    int linhas, contador, soma = 0, media;
    
    printf("Informe um número de linhas:\n");
    scanf("%d", &linhas);
    
    for (contador = linhas; contador > 0; contador--){
        
        //printf("%d ", contador);
        soma += contador;
    
    }

    //printf("%d", soma);
    media = soma/linhas;
    
    printf("A média de idade é de aproximadamente: %d anos", media);
    
    return 0;
}

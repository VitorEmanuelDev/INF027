/*3 - Faça um programa que receba várias idades, calcule e mostre a média das idades digitadas.
Finalize digitando idade igual a zero.*/

#include <stdio.h>

int main()
{
    int i, idades;
    float idade, media, soma = 0;
    
    printf("Quantas idades deseja informar?\n");
    scanf("%d", &idades);
    
    for(i = 1; i <= idades; i++){
        
        printf("Informe a %dª idade.", i);
        scanf("%f", &idade);
        soma += idade;
        
    }
    
    media = soma/idades;
    printf("A média de idade é de aproximadamente %.1f", media);

    return 0;
}

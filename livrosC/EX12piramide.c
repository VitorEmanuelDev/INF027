/*Dada a base e a altura de uma pirâmide. 
Fazer um algoritmo que calcule e escreva o volume desta.*/

#include <stdio.h>

int main()
{
    float base, altura, volume;
    
    printf("Informe a área da base e a altura.\n");
    scanf("%f%f", &base, &altura);
    
    volume = (base * altura)/3;
    
    printf("O volume da pirâmide é de %.2f. m²", volume);

    return 0;
}

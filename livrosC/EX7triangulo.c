/*Desenvolver um algoritmo para ler os comprimentos
dos três lados de um triângulo (L1, L2 e L3)
e calcular a área do triângulo.*/

#include <stdio.h>

int main()
{
    int base, altura, area;
    
    printf("Informe o tamanho da base e a altura.\n");
    scanf("%d%d", &base, &altura);
    
    area = (base * altura)/2;
    
    printf("A área do triângulo é de %d cm².", area);

    return 0;
}

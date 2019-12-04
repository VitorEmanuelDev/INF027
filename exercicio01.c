//Dado o tamanho da base e da altura de um retângulo, calcular a sua área e o seu perímetro.

#include <stdio.h>

int main()
{
    int base, altura, area, perimetro;
    
    printf("Informe o comprimento das bases.\n");
    scanf("%d", &base);
    
    printf("Informe a altura.\n");
    scanf("%d", &altura);
    
    area = base * altura;
    
    printf("A area é de %d. \n", area);
    
    perimetro = (base * 2) + (altura * 2);
    
    printf("O perímetro é de %d.", perimetro);
    
    return 0;
}

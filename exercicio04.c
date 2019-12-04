//Dado os três lados de um triângulo determinar o perímetro do mesmo.

#include <stdio.h>

float b, B, h, area, perimetro;

int main()
{
    printf("Informe a base menor\n");
    scanf("%f", &b );
    printf("Informe a base maior\n");
    scanf("%f", &B );
    printf("Informe a altura\n");
    scanf("%f", &h );
    
    area = ((b + B)*h)/2;
    
    printf("A area é igual a %.2f\n", area);
    
    perimetro = b + B + h;
    
    printf("O perímetro é igual a %.2f.", perimetro);
    

    return 0;
}

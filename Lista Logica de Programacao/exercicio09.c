//Faça um algoritmo que calcule e apresente o valor do volume de uma lata de óleo, dado seu raio e sua altura.


#include <stdio.h>
#include <math.h>

int main()
{
    float raio, pi = 3.14, area, perimetro, volume, altura;
    
    printf("Informe o raio da circunferência da lata em metros.\n");
    scanf("%f", &raio);
    
    area = pi * pow(raio, 2);
    
    printf("A area da base é de %.2f metros quadrados.\n", area);
    
    perimetro = 2 * pi * raio;
    
    printf("O perímetro da base é de %.2f metros.\n\n", perimetro);
    
    printf("Informe a altura. \n");
    scanf("%f", &altura);

    volume = area * altura;
    
    printf("O volúme da lata é de %.2f metros cubicos", volume);

    return 0;
}


//Escreva um programa que, dado o raio de um circulo, calcule a sua area e o perimetro.
// A area eh a superficie do objeto, dada por A = π . r2, e o perimetro eh a medida do contorno do objeto, dado por P = 2 π . r.


#include <stdio.h>
#include <math.h>

int main()
{
    float raio, perimetro, area;
    float pi = 3.14;

    printf("Escreva um raio.\n");
    scanf("%f", &raio);
    
    perimetro = 2*pi*raio;
    printf("O perimetro do circulo eh igual a %.2f\n\n", perimetro);
    
    area = pi*pow(raio, 2);
    printf("A area do circulo eh igual a %.2f\n", area);
    
    return 0;
}

#include <stdio.h>
#include <math.h>

float main()
{
    float raio, comprimento, area, volume;
    float pi = 3.14;
    
    printf("Informe o raio da esfera.\n");
    scanf("%f", &raio);
    
    comprimento = 2 * pi * raio;
    
    printf("O comprimento da esfera é de %.2f.\n", comprimento);
    
    area = pi * pow(raio, 2);
    
    printf("A área da esfera é de %.2f\n", area);
    
    volume = (3 * pi * pow(raio, 3))/4;
    
    printf("O volume da esfera é de %.2f.", volume);
    
    return 0;
}

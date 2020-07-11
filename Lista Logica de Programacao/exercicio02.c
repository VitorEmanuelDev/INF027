//Dado o tamanho do lado de um quadrado, calcular a área e o perímetro do mesmo.

#include <stdio.h>
#include <math.h>

int main()
{
    int lado, area, perimetro;
    
    printf("Informe o tamanho do lado do quadrado em cm.\n");
    scanf("%d", &lado);
    
    area = pow(lado, 2);
    
    perimetro = lado *4;
    
    printf("A área é de %d cm quadrados e o perímetro é de %d cm.\n", area, perimetro);

    return 0;
}

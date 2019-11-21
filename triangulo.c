#include <stdio.h>

float b, B, h, area;

int main()
{
    printf("Informe a base menor\n");
    scanf("%f", &b );
    printf("Informe a base maior\n");
    scanf("%f", &B );
    printf("Informe a altura\n");
    scanf("%f", &h );
    
    area = ((b + B)*h)/2;
    
    printf("A area eh igual a %f\n", area);
    

    return 0;
}

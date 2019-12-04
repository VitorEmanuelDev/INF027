
//Faça um algoritmo que transforme uma velocidade fornecida em m/s pelo usuário para Km/h. Para tal, multiplique o valor em m/s por 3,6.

#include <stdio.h>

float main()
{
    float metrospseg, kmpseg; 
    
    printf("Informe uma velocidade em metros por segundo.\n");
    scanf("%f", &metrospseg);
    
    kmpseg = metrospseg * 3.6;
    
    printf("A velocidade em Km/h é de: %.1f", kmpseg);

    return 0;
}

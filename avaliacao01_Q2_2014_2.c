/*Escreva um programa em C, que receba três números
representando uma coordenada geográfica expressa em
graus decimais. Para tanto, considere que 60 minutos
equivlem a um grau e 60 segundos equivalem a um minuto. 
Assim, por exemplo, 37°39'20" (37 graus, 39 minutos
e 20 segundos) equivalem, aproximadamente, a 37.65556 
graus decimais.*/

#include <stdio.h>

int main()
{
    float graus, minutos, segundos, grausDec;
    
    printf("Informe o grau, os minutos, e os segundos:\n");
    scanf("%f%f%f", &graus, &minutos, &segundos);
    
    grausDec = graus + ((minutos/60) + (segundos/3600));
    
    printf("%f", grausDec);

    return 0;
}

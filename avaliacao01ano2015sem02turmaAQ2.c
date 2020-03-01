/*Escreva um número de até três dígitos, menor ou igual a 777(8), em octal
(sistema de numeração base 8) e escreva o seu equivalente em base 10. Por exemplo,
o número 435(8), equivale ao número 285(10). (4*8² + 3*8¹ + 5*8^0 = 4*64+ 3*8+5*1=256+24+5=285).
Faça o teste de mesa considerando os valores indicados (entrada = 435; saída=285).*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numeroOctal, numeroDecimal, centena, dezena, unidade;
    
    printf("Informe um número menor ou igual a 777 em base Octal:\n");
    scanf("%d", &numeroOctal);
    
    if(numeroOctal > 777 || numeroOctal < 0){
        
        printf("Número inválido.");
        
    } else {
        
        centena = numeroOctal/100;
        dezena = (numeroOctal%100)/10;
        unidade = numeroOctal%100%10;
        
        //printf("%d %d %d", centena, dezena, unidade);
        
        numeroDecimal = centena * pow(8,2) + dezena * pow(8,1) + unidade * pow(8,0);
        
        printf("%d(10)",numeroDecimal);
        
    }

    return 0;
}

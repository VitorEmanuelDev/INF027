/*

Chama-se ano bissexto o ano ao qual é acrescentado um dia extra, ficando ele com 366 dias,
um dia a mais do que os anos normais de 365 dias, ocorrendo a cada quatro anos. Escreva um
programa que verifique se um ano é bissexto. Um ano é bissexto se ele é divisível por 4.
Entretanto, se o ano é divisível por 100, ele não é bissexto. Mas, se ele for divisível por 400, 
ele volta a ser bissexto.

a. São bissextos os anos: 1600, 1996, 2000, 2004, 2008, 2012, 2016, 2400, 2800, ...
b. Não são bissextos: 1500, 1974, 1982, 1983, 1990, 2018, 2022, 2030, 2038, ...

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano, bissexto, regular, resto, resto1, resto2, 
    resto3, resto4, milhar, centena, dezena, unidade;
    
    printf("Informe um ano.\n");
    scanf("%d", &ano);
    
    resto = ano/1000;
    milhar = resto*1000;
    
    resto1 = ano%1000;
    centena = resto1*100;
    
    resto2 = resto1%100;
    dezena = resto2*10;
    
    resto3 = resto2%10;
    unidade = resto3;
    
    resto4 = ((milhar%4) + (centena%4) + (dezena) + (unidade))%4;
    
    
    if((resto4 == 0) && (ano%400 == 0)){
        
        printf("%d é um ano bissexto.", ano);
        
    } else/*if(resto4 != 0 && ano%400 != 0)*/{
        
        printf("%d não é um ano bissexto.", ano);
        
    }

    return 0;
}

/*Um funcionário de uma empresa recebe aumento salarial anualmente. Sabe-se que:

a) Esse funcionário foi contratado em 2014, com salário inicial de R$ 1.000,00;

b) Em 2014 recebeu aumento de 1,5% sobre seu salário inicial;

c) A partir de 2015 (inclusive), os aumentos salariais sempre corresponderam ao
dobro do percentual do ano anterior.

Faça um programa que determine o salário atual desse funcionário.*/

#include <stdio.h>

int main()
{
    float salario = 1015, contador, percentual = 0.015;
    
    for (contador = 2015; contador <= 2020; contador++){
        
        percentual = percentual * 2;
        salario *= (percentual + 1);
        //printf("%.2f ", salario);
        
    }
    
    printf("O salário atual do funcionário é de R$ %.2f", salario);

    return 0;
}

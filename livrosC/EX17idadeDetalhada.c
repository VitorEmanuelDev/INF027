/*Fazer um algoritmo que leia a idade
de uma pessoa expressa em dias e mostre-a
expressa em anos, meses e dias.*/

#include <stdio.h>

int main()
{
    
    int dias, resto, idadeAnos, restoDias, idadeMes, idadeDias, ano = 365, mes = 30;
    
    printf("Qual a idade da pessoa em dias?\n");
    scanf("%d", &dias); // 10227
    
    idadeAnos = dias/ano; // 10227/365 = 28 anos
    
    resto = dias%ano; // 10227%365 = 7
    
    idadeMes = resto/mes; // 7/30 = 0 meses
    
    idadeDias = idadeMes%mes; // 0%30 = 0 dias
    
    printf("A pessoa tem %d anos, %d meses e %d dias.", idadeAnos, idadeMes, idadeDias);

    return 0;
}


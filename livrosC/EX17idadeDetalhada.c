/*Fazer um algoritmo que leia a idade
de uma pessoa expressa em dias e mostre-a
expressa em anos, meses e dias.*/

#include <stdio.h>

int main()
{
    
    int idadeAnos, restoIdadeAnos, idadeMes, idadeDias, ano = 365.25, mes = 30.4375;
    
    printf("Qual a idade da pessoa em dias?\n");
    scanf("%d", &idadeDias);
    
    idadeAnos = idadeDias/ano;
    
    restoIdadeAnos = idadeDias%ano;
    
    idadeMes = restoIdadeAnos/mes;
    
    idadeDias = idadeMes%mes;
    
    printf("A pessoa tem %d anos, %d meses e %d dias.", idadeAnos, idadeMes, idadeDias);

    return 0;
}


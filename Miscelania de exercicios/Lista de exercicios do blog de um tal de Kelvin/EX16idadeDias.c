/*Fazer um algoritmo que leia a idade
de uma pessoa expressa em anos, meses
e dias e mostre-a apenas em dias.*/

#include <stdio.h>

int main()
{
    
    float idade, meses, dias, idadeDias, diasAno = 365.25, diasMes = 30.4375;
    
    printf("Quantos anos a pessoa tem?\n");
    scanf("%f", &idade);
    printf("%.0f anos e quantos meses?\n", idade);
    scanf("%f", &meses);
    printf("%.0f anos, %.0f meses e quantos dias?\n", idade, meses);
    scanf("%f", &dias);
    
    idadeDias = (idade * diasAno) + (meses * diasMes) + dias; 
    
    printf("A idade informada em dias é de: %.0f", idadeDias);

    return 0;
}

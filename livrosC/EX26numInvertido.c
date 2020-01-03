/*Escrever um algoritmo que lê um número de 3 dígitos
e o inverta, escrevendo o número invertido.*/

#include <stdio.h>

int main()
{
    int num, centena, dezena, unidade, resto, numNovo;
    
    printf("Informe um número de três digitos.\n");
    scanf("%d", &num);
    
    centena = num/100; // 9 = 987/100;
    resto = num%100; // 87 = 987%100;
    dezena = resto/10; // 8 = 87/10;
    unidade = resto%10; // 7 = 87%10;
    
    numNovo = (unidade * 100) + (dezena * 10) + centena; // 789 = (7*100)+(8*10)+9;
    
    printf("O número invertido é %d", numNovo);

    return 0;
}


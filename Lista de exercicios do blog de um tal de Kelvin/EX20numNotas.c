/*Escreva um algoritmo que lê um valor em reais
e calcula qual o menor número possível de notas
de $100, $50, $20, $10, $5, $2 e  moedas de $1 em que o valor lido pode
ser decomposto. Escrever o valor lido e a relação
de notas necessárias.*/

#include <stdio.h>

int main()
{
    int valor, numNot100, numNot50, numNot20, numNot10,
    numNot05, numNot02, numMoe01, resto;
    
    printf("Informe o valor em reais.\n");
    scanf("%d", &valor); // 579
    
    numNot100 = valor/100; // 579/100 = 5 
    resto = valor%100; // 579%100 = 79
    numNot50 = resto/50; // 79/50 = 1
    resto = resto%50;// 79%50 = 29
    numNot20 = resto/20; // 29/20 = 1
    resto = resto%20; // 29%10 = 9
    numNot10 = resto/10; // 9/10 = 0
    resto = resto%10; // 9%10 = 0
    numNot05 = resto/5; // 9/5 = 1
    resto = resto%5; // 9%5 = 4
    numNot02 = resto/2; // 4/2 = 2
    resto = resto%2; // 4%2 = 0
    numMoe01 = resto/1; // 0/1 = 0
    resto = resto%1; //0%1 = 0
    
    printf("%d notas de R$ 100.00\n", numNot100);
    printf("%d notas de R$ 50.00\n", numNot50);
    printf("%d notas de R$ 20.00\n", numNot20);
    printf("%d notas de R$ 10.00\n", numNot10);
    printf("%d notas de R$ 5.00\n", numNot05);
    printf("%d notas de R$ 2.00\n", numNot02);
    printf("%d moedas de R$ 1.00\n", numMoe01);

    return 0;
}

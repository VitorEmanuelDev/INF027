/*Fazer um algoritmo que calcule e imprima o salário
reajustado de um funcionário de acordo com as seguintes regras:

• Salário de até R$300,00 reajuste de 50%;
• Salário maiores que R$300,00 reajuste de 30%;*/

#include <stdio.h>

int main()
{
    float salario, reajuste;
    
    printf("Informe o salário.\n");
    scanf("%f", &salario);
    
    
    if(salario <= 300){
        
        reajuste = salario * 1.5;
        printf("O salário após reajuste é de R$ %.2f", reajuste);
        
    } else {
        
        reajuste = salario * 1.3;
        printf("O salário após reajuste é de R$ %.2f", reajuste);
        
    }

    return 0;
}

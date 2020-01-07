/*Desenvolver um algoritmo que determine o imposto de renda cobrado de um funcionário
pelo governo. Seu programa deverá ler o valor do salário, o n° de dependentes,
o salário do funcionário e o taxa de imposto normal que já foi paga pelo funcionário.
O imposto bruto é:

• 20% do salário do funcionário se o funcionário ganha mais de 12 salários mínimos;
• 8% do salário do funcionário se o funcionário ganha mais de 5 salários mínimos e
• Quem ganha menos ou igual de 5 salários mínimos não é cobrado o imposto de renda.
• Caso o funcionário receba até 3 salários mínimos, terá direito ao valor de R$ 100,00
  por dependente até o valor máximo de três dependentes.
  
Obs.: Sabe-se que o governo cobra 4% de taxa adicional sobre o IMPOSTO BRUTO.*/

#include <stdio.h>

int main()
{
    int dependentes;
    float salarioMin, salarioFunc, numSalMin, posTaxa;
    
    printf("Qual o salário do funcionário?\n");
    scanf("%f", &salarioFunc);
    
    printf("Qual o salário mínimo atual?\n");
    scanf("%f", &salarioMin);
    
    printf("Qual o número de dependentes?\n");
    scanf("%d", &dependentes);
    
    numSalMin = salarioFunc/salarioMin;
    
    if(numSalMin > 12){
        
        posTaxa = (salarioFunc * 0.8) * 0.96;
        printf("O salário, após aplicado o imposto, é de R$ %.2f", posTaxa);
        
    } else if (numSalMin > 5 && numSalMin <= 12){
        
        posTaxa = (salarioFunc * 0.92) * 0.96;
        printf("O salário, após aplicado o imposto, é de R$ %.2f", posTaxa);
        
    } else if (numSalMin == 1 || numSalMin <= 3){
        
        posTaxa = salarioFunc + (dependentes * 100);
        printf("O salário é de R$ %.2f", posTaxa);
        
    } else if (numSalMin > 3 && numSalMin <= 5){
        
        posTaxa = salarioFunc;
        printf("O salário é de R$ %.2f", posTaxa);
        
    }

    return 0;
}

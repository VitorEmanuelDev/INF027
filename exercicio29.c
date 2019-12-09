/*Escreva um programa que calcula o desconto previdenciário de um funcionário. Dado um
salário, o programa deve retornar o valor do desconto proporcional ao mesmo. O cálculo
segue a regra: o desconto é de 11% do valor do salário, entretanto, o valor máximo de
desconto é 334,29, o que seja menor.*/

#include <stdio.h>

int main()
{
    float salarioBase, desconto, salarioReal, descontoMax = 334.29, taxa = 0.11;
    
    printf("Informe o salário base.\n");
    scanf("%f", &salarioBase);
    
    desconto = salarioBase * taxa;
    
    salarioReal = salarioBase - desconto;
    
    if(desconto >= descontoMax){
        
        salarioReal = salarioBase - descontoMax;
        printf("Salário real: %.2f", salarioReal);
        
    } else {
        
        salarioReal = salarioBase - desconto;
        printf("Salário real: %.2f", salarioReal);
        
    }

    return 0;
}

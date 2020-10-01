/*
Escreva um programa em C que calcule o desconto previdenciário de um funcionário.
Dado um salário, o programa deve imprimir o valor do descontoproporcional ao mesmo.
O cálculo segue a regra: o desconto é de 11% do valor do salário, entretanto,
o valor máximo de desconto é 570.88.
*/

#include <stdio.h>

int main()
{
    float salarioBase, salarioDesconto;
    
    printf("Informe o salário base:\n");
    scanf("%f", &salarioBase);
    
    salarioDesconto = salarioBase * 0.89;
    
    if (salarioBase - salarioDesconto > 570.88){
        
        salarioDesconto = salarioBase - 570.88;
        printf("O salário após desconto foi de: R$ %.2f", salarioDesconto);
        
    } else if (salarioBase - salarioDesconto < 570.88){
        
        printf("O salário após desconto foi de: R$ %.2f", salarioDesconto);
        
    }

    return 0;
}

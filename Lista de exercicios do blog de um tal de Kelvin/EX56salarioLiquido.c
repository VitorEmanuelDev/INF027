/*Escrever um algoritmo e um programa que leia
a quantidade de horas trabalhadas por um funcionário
em um mês, o valor que ele recebe por hora e o percentual
de desconto para o INSS. Calcular o salário bruto
(horas trabalhadas * valor hora), o valor do desconto
para o INSS e o salário líquido (Salário bruto – desconto INSS).
Mostrar o salário bruto, o valor do desconto do INSS e o salário 
líquido do funcionário.

As alíquotas (descontos) são de 8% para aqueles que ganham
até R$ 1.830,29; de 9% para quem ganha entre R$ 1.830,30 e R$ 3.050,52;
e de 11% para os que ganham entre R$ 3.050,53 e R$ 6.101,06.
*/

#include <stdio.h>

int main()
{
    float numHoras, valorHora, descontoINSS, salarioBruto, salarioLiquido;
    
    printf("Qual foi a quantidade de horas trabalhadas no mês?\n");
    scanf("%f", &numHoras);
    
    printf("Qual o valor da hora de trabalho?\n");
    scanf("%f", &valorHora);
    
    salarioBruto = numHoras * valorHora;
    
    if(salarioBruto <= 1830.29){
        
        descontoINSS = salarioBruto * 0.08;
        salarioLiquido = salarioBruto - descontoINSS;
        
    } else if(salarioBruto >= 1830.30 && salarioBruto <= 3050.52){
        
        descontoINSS = salarioBruto * 0.09;
        salarioLiquido = salarioBruto - descontoINSS;
        
    } if(salarioBruto >= 3050.53 && salarioBruto <= 6101.06){
        
        descontoINSS = salarioBruto * 0.11;
        salarioLiquido = salarioBruto - descontoINSS;
        
    } 
    
    printf("O salário bruto calculado foi de: R$ %.2f\nO desconto do INSS foi de: %.2f\nO salário líquido foi de: %.2f\n", salarioBruto, descontoINSS, salarioLiquido);

    return 0;
}

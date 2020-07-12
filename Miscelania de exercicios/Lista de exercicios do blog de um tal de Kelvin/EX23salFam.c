/*Escrever um algoritmo que lê o número de funcionário,
seu número de horas trabalhadas, o valor que recebe por
hora, o número de filhos com idade menor que 14 anos e o
valor do salário família (R$ 31,07 pagos por filho com menos de 14
anos a funcionários que recebam até R$ 1.292,43). Calcular o salário total deste funcionário e escrever
o seu número e o seu salário total.*/

#include <stdio.h>

int main()
{
    float numFunc, horasTrab, valorHora, filhos, salBrut, salFam, salTotal;
    
    printf("Qual o número da/o funcionária/o?\n");
    scanf("%f", &numFunc);
    
    printf("Qual a quantidade de horas trabalhadas?\n");
    scanf("%f", &horasTrab);
    
    printf("Qual o valor a receber por hora?\n");
    scanf("%f", &valorHora);
    
    printf("Quantos filhos com menos de 14 anos?\n");
    scanf("%f", &filhos);
    
    salBrut = horasTrab * valorHora;
    salFam = filhos * 31.07;
    
    if (salBrut <= 1292.43){
        
        salTotal = salBrut + salFam;
        
        printf("O salário da/o funcionária/o %.0f após adição do salário família é de: %.2f", numFunc, salTotal);
        
    } else {
        
        printf("A/O funcionária/o %.0f não tem direito ao salário família.\n", numFunc);
        printf("Seu salário bruto é de %.2f", salBrut);
        
    }
    
    return 0;
}

/*Uma financeira usa o seguinte critério para conceder empréstimos: o valor total do
empréstimo deve ser até dez vezes o valor da renda mensal do solicitante e o valor da
prestação deve ser no máximo 30% da renda mensal do solicitante. Escreva um programa
que leia a renda mensal de um solicitante, o valor total do empréstimo solicitado e o
número de prestações que o solicitante deseja pagar e informe se o empréstimo pode ou
não ser concedido.*/

#include <stdio.h>
#include <stdlib.h>

float main()
{
    float valorTotalEmp, rendaMensal, propValorRenda;
    int numPrestacao, valorPrestacao;
    
    printf("Informe a sua renda mensal.\n");
    scanf("%f", &rendaMensal);
    
    printf("Informe o valor do empréstimo desejado.\n");
    scanf("%f", &valorTotalEmp);
    
    printf("Informe o número de prestações que deseja.\n");
    scanf("%d", &numPrestacao);
    
    
    propValorRenda = valorTotalEmp / rendaMensal;
    
    valorPrestacao = valorTotalEmp / numPrestacao; 
    
 
    if(propValorRenda > 10){
        
        printf("Sua renda está abaixo do valor solicitado.\n");
        printf("Por favor solicite um valor que seja até 10 vezes o da sua renda mensal.\n");
        
    } else if(valorPrestacao > (rendaMensal*0.3)){
        
        printf("O valor da sua prestação não pode estar acima de 30 porcento do valor da sua renda mensal.\n");
        
    } else {
        
        printf("Seu empréstimo foi aprovado!\n");
        printf("R$ %.2f em %d prestações de R$ %d.\n",valorTotalEmp, numPrestacao, valorPrestacao);
        
    }
    
    return 0;
}


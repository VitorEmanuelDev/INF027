/*Em uma padaria, o padeiro quer saber qual o
custo de fabricação do pão francês de forma a
saber por quanto terá que vender o pão, tendo
um lucro de 30%. Sabendo-se que a receita do 
pão leva farinha, água e fermento, escreva um 
algoritmo que lê a quantidade de quilos de farinha, 
o valor do quilo de farinha, a quantidade de litros 
de água, o valor do litro de água, a quantidade de 
quilowattsde hora de luz, o valor do quilowatts hora
e o percentual do imposto que o padeiro paga pelo pão
e calcular e imprimir o preço de custo e de venda.*/

#include <stdio.h>

int main()
{
    float kgFarinha, litrosAgua, kWatts, valorFarinha, valorAgua, valorkWatts,
    percentImposto, precoCusto, precoVenda, margemLucro = 30;
    
    printf("Quantos kg de farinha e qual o valor do kg?\n");
    scanf("%f", &kgFarinha);
    scanf("%f", &valorFarinha);
    
    printf("Quantos l de água e qual o valor por l consumido?\n");
    scanf("%f", &litrosAgua);
    scanf("%f", &valorAgua);
    
    printf("Quantos kW/hora e qual o valor do kW/h ?\n");
    scanf("%f", &kWatts);
    scanf("%f", &valorkWatts);
    
    precoCusto = ((kgFarinha * valorFarinha) + (litrosAgua * valorAgua) + (kWatts * valorkWatts)) * (1 + (percentImposto/100));
    
    precoVenda = (((kgFarinha * valorFarinha) + (litrosAgua * valorAgua) + (kWatts * valorkWatts)) * (1 + (percentImposto/100))) * (1 + (margemLucro/100));

    printf("O custo total de produção foi de: R$ %.2f\n", precoCusto);
    printf("O preço total para consumo final foi de: R$ %.2f\n", precoVenda);
    
    return 0;
}

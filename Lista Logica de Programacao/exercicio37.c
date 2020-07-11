/*Uma Cia de pulverização utiliza avião para pulverizar lavouras. Os custos de pulverização
dependem do tipo de praga e da área a ser contratada conforme a tabela:

Tipo 1 – ervas daninhas R$ 50,00 por acre;
Tipo 2 – gafanhotos R$ 100,00 por acre;
Tipo 3 – broca R$ 150,00 por acre;
Tipo 4 – todos acima R$ 250,00 por acre.

Se a área a ser pulverizada for superior a 1000 acres, o fazendeiro tem um desconto de 5%.
Em adição, qualquer fazendeiro cujo custo for maior do que R$ 750,00 tem um desconto de
10% sobre o valor que ultrapassar os R$ 750,00. Caso ambos os descontos se aplicam o da
área é calculado antes. Fazer um algoritmo que leia: o tipo de pulverização (1 a 4) e área a ser
pulverizada; e imprima o valor a ser pago.*/

#include <stdio.h>
#include <stdlib.h>



int main()
{
    
    float area, precoFinal, custo, desconto1, desconto2, erva = 50, gafanhoto = 100, broca = 150, todos = 250;
    
    printf("Qual a área a ser pulverizada?\n");
    scanf("%f", &area);
    
    int tipo;
    
    printf("Qual o tipo de pulverização?\n");
    scanf("%d", &tipo);
    
    switch (tipo){
        
        case 1: printf("Ervas daninhas: R$ 50,00 por acre.\n");
        
        custo = area * erva;
        
        printf("Seu custo foi de %.2f\n", custo);
        
        break;
        
        case 2: printf("Gafanhotos: R$ 100,00 por acre.\n"); 
        
        custo = area * gafanhoto;
        
        printf("Seu custo foi de %.2f\n", custo);
        
        break;
        
        case 3: printf("Broca: R$ 150,00 por acre.\n"); 
        
        custo = area * broca;
        
        printf("Seu custo foi de %.2f\n", custo);
        
        break;
        
        case 4: printf("Ervas, gafanhotos e broca: R$ 250,00 por acre.\n"); 
        
        custo = area * todos;
        
        printf("Seu custo foi de %.2f\n", custo);
        
        break;
        
    } 
    
    if(area > 1000){
        
        desconto1 = custo * 0.95;
        
        printf("Após desconto, seu preço foi de: %.2f\n", desconto1);
        
    } 
    
    if (custo > 750){
        
        desconto1 = desconto1 - ((desconto1 - 750) * 0.1);
        
        printf("Após o segundo desconto, seu preço foi de: %.2f\n", desconto1);
        
    }
    
    return 0;
}



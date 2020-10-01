/*

Para se determinar o número de lâmpadas  necessárias para um cômodo
de uma residência, existem normas que dão o mínimo de potência de
iluminação exigida por metro quadrado, conforme a classe do comodo.
A tabela abaixo exibe estes valores:

classe 1 (Quarto ou Sala de TV): 12 W/m²

clase 2 (Sala, Cozinha ou Varanda): 15 W/m²

classe 3 (Banheiro ou Escritório): 20 W/m²

Suponha que serão usadas na iluminação apenas lâmpadas de 60 W e escreva
um programa em C, que leia a classe de utilização do cômodo e suas dimensões
(largura e comprimento), calcule e imprima o número de lâmpadas de 60 W necessárias
para a iluminação do cômodo;
*/
#include <stdio.h>

int main()
{
    int classe, lampadas;
    float largura, comprimento, area, wattTotal;
    
    printf("Informe o tipo de cômodo a ser iluminado:\n");
    scanf("%d", &classe);
    
    printf("Informe as dimensões do cômodo (largura x comprimento):\n");
    scanf("%f%f", &largura, &comprimento);
    
    area = largura * comprimento;
    
    if(classe < 0 || classe > 3){
        
        printf("Classe inválida.");
        
    } else if (classe == 1){
        
        wattTotal = area * 12;
        lampadas = wattTotal/60;
        
    } else if (classe == 2){
        
        wattTotal = area * 15;
        lampadas = wattTotal/60;
        
    } else if (classe == 3){
        
       wattTotal = area * 20;
       lampadas = wattTotal/60;
        
    }
    
    printf("\nSerão necessárias %d lâmpadas.", lampadas);

    return 0;
}

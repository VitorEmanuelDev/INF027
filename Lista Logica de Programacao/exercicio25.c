//Escreva um programa que leia o número equivalente ao mês e imprima a quantidade de dias deste mês.

#include <stdio.h>

int main()
{
    int mes;
    
    printf("Informe um número de 1 a 12.\n");
    
    scanf("%d", &mes);
    
    if (mes > 12 || mes < 0){
        
        printf("Reinicie o programa e informe um número de 1 a 12.\n");
        
    } else {
        switch(mes){
            case 1 : printf("Janeiro tem 31 dias.");
            break;
            
            case 2 : printf("Fevereiro tem 29 dias.");
            break;
            
            case 3 : printf("Março tem 31 dias.");
            break;
            
            case 4 : printf("Abril tem 30 dias.");
            break;
            
            case 5 : printf("Maio tem 31 dias.");
            break;
            
            case 6 : printf("Junho tem 30 dias.");
            break;
            
            case 7 : printf("Julho tem 31 dias.");
            break;
            
            case 8 : printf("Agosto tem 31 dias.");
            break;
            
            case 9 : printf("Setembro tem 30 dias.");
            break;
            
            case 10 : printf("Outubro tem 31 dias.");
            break;
            
            case 11 : printf("Novembro tem 30 dias.");
            break;
            
            case 12 : printf("Dezembro tem 31 dias.");
            break;
            
        }
            
    }
    
    return 0;
}

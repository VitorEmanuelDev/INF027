/* Weather. Rain. 5 years average*/

#include <stdlib.h>
#include <stdio.h>
#define MESES 12
#define ANOS 5

int main()
{
    float chuva[ANOS][MESES] = {
        
        {9,8,7,4,5,6,3,2,1,4,5,2},
        {3,2,5,4,6,8,7,9,7,8,9,8},
        {8,7,6,5,4,2,3,4,8,7,8,5},
        {1,2,3,3,5,4,1,2,5,6,5,4},
        {7,8,5,6,4,1,2,3,1,1,5,6}
        
    };
    
    int ano, mes;
    float total, subTotal, mediaAnos, mediaMeses;
    
    printf("Ano\t\tChuva (mm)\n");
    
    for(ano = 0, total = 0; ano < ANOS; ano++){
        
        for(mes = 0, subTotal = 0; mes < MESES; mes++){
            
            subTotal += chuva[ano][mes];
            
        }
        
        printf("%d  \t\t%.2f\n", 2015 + ano, subTotal);
        total += subTotal;
        
    }
    
    mediaAnos = total/ANOS;
    
    printf("\nA média anual foi de %.2f mm.\n", mediaAnos);

    printf("\nMédias mensais:\n\n");
    printf(" Jan  Fev  Mar  Abr  Mai  Jun  Jul  Ago  Set  Out  Nov  Dez\n");
    
    for(mes = 0; mes < MESES; mes++){
        
        for(ano = 0, subTotal = 0; ano < ANOS; ano++)
            subTotal += chuva[ano][mes];
            
            mediaMeses = subTotal/ANOS;
    
            printf("%4.1f ", mediaMeses);
        
    }
    
    
    return 0;
    
}

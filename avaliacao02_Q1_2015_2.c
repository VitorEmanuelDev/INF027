/*Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce
3 centímetros por ano. Construa um programa em C que calcule e imprima quantos anos
serão necessários para que Zé seja maior que Chico.*/

#include <stdio.h>

int main()
{
    int i, contagem = 1;
    float chico = 1.5, ze = 1.1;
    
    //for(i = 1; i <= 100; i++){
    //        
    //        chico += 0.02;
    //        ze += 0.03;
    //        //printf("%.2f ; %.2f ", chico, ze);
    //        contagem++;
    //        
    //        if(ze > chico){
    //            
    //            printf("Zé será maior que Chico depois de %d anos.", contagem);
    //            break;
    //            
    //        }
    //    
    //}
    
    
    i = 1;
    
    while(ze <= chico){
        
        chico += 0.02;
        ze += 0.03;
        
        i++;
    }
    
    if(ze > chico){
        
        printf("Zé será maior que Chico depois de %d anos.", i);
        
    }

    return 0;
}

/*Escreva um programa que leia o índice pluviométrico de cada dia do mês de junho e
informe o dia que mais choveu, o dia que menos choveu e as médias pluviométricas de
cada uma das duas quinzenas.*/

#include <stdio.h>

int main()
{
    int i, indice[30];
    float maior, menor, soma1 = 0, soma2 = 0, media1, media2;
    
    printf("Informe o índice pluviométrico de cada dia do mês de junho.\n");
    
    for(i = 0; i < 30; i++){
        
        scanf("%d", &indice[i]);
        
    }
    
    for(i = 0; i < 30; i++){
        
        if(i < 15){
            
            soma1 += indice[i];
            media1 = soma1/15;
            
        }
        
        if(i >= 15){
            
            soma2 += indice[i];
            media2 = soma2/15;
            
        }
        
    }
  
    maior = 0;
    menor = i;
    
    for(i = 0; i < 30; i++){
        
        if(indice[i] > maior){
            
            maior = indice[i];
            
        }
        
        if(indice[i] < menor){
            
            menor = indice[i];
            
        }
        
    }
    
    printf("O maior índice pluviométrico foi de %.2f mm\n", maior);
    printf("O menor índice pluviométrico foi de %.2f mm\n", menor);
    printf("Média da primeira quinzena %.2f mm.\nMédia da segunda quinzena %.2f mm.", media1, media2);


    return 0;
}



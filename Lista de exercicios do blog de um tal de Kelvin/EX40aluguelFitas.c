/*Uma locadora de filmes tem a seguinte regra para aluguel de fitas.

– As segundas, terças e quintas (2, 3 e 5): um desconto de 40% em cima do preço normal;
– As quartas, sextas, sábados e domingos (4, 6, 7 e 1): preço normal;
– Aluguel de fitas comuns: preço normal e aluguel de lançamentos: acréscimo de 15% em cima do preço normal.*/

#include <stdio.h>
#include <string.h>

int main()
{   float precoNormal, preco, precoFinal;
    char diaSemana[15], lancamento[15];
    
    printf("Informe o preço normal.\n");
    scanf("%f", &precoNormal);
    
    printf("Informe o dia da semana em que vai alugar.\n");
    scanf("%s", diaSemana);
    
    printf("O título é um lançamento?\n");
    scanf("%s",lancamento);
    
    if (strcmp(diaSemana,"segunda") == 0 || strcmp(diaSemana,"terça") ==0 || strcmp(diaSemana,"quinta") == 0){
        
        preco =  precoNormal * 0.6;
        
    } else if (strcmp(diaSemana,"quarta") == 0 || strcmp(diaSemana,"sexta") == 0 || strcmp(diaSemana,"sábado") == 0 || strcmp(diaSemana,"domingo") == 0){
        
        preco = precoNormal;
        
    }


    if(strcmp(lancamento,"sim") == 0){
        
        precoFinal = preco + (precoNormal * 0.15);
        printf("A fita solicitada custa R$ %.2f para alugar.", precoFinal); 
        
    } else if(strcmp(lancamento,"não") == 0){
        
        precoFinal = preco;
        printf("A fita solicitada custa R$ %.2f para alugar.", precoFinal); 
        
    }
    
    return 0;
}

/*Questão 07 Prof Luiz Machado

obs: enunciado com licença "poética"

Depois de uma longa jornada de sefudência, Mario e Luigi chegaram
à fortaleza onde encontra-se a, sempre perdida, princesa Peach, mas
antes de conseguirem finalmente resgatar a lazarenta, eles terão mais
um desafio pela frente,um sacana feio como a d*sgraça chamado Bowser.

Os nossos jovens estarão equipados com "flores" que lhes concedem
"poderes especiais", e os respectivos danos estão definidos na tabela a seguir:

- Rosa: Mário 32, Luigi 28;
- Tulipa: 50, 45;
- Girassol: 73, 70;

O nosso herói será capaz de desferir (uia!) 4 porradas consecutivas no
tal do Bowser antes que ele se pique. Caso o dano causado por um dos moços
de bigode seja menor, ou igual, à vida do coisa ruim, ele consegue fugir
com a princesa para sempre... sentiu o drama?

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char player[25], flor[25];
    int vidaBowser, contador; 
    
    printf("Mario ou Luigi?\n");
    scanf("%s", player);
    
    printf("Rosa, Tulipa ou Girassol?\n");
    scanf("%s", flor);
    
    printf("Qual a vida do Bowser?\n");
    scanf("%d", &vidaBowser);
    
    
    if(strcmp(player, "Mario") == 0){
        
        if(strcmp(flor, "Rosa") == 0){
            
            for(contador = 0; contador < 4; contador++){
                
                vidaBowser = vidaBowser - 32;
                
            }
            
            
        } else if(strcmp(flor, "Tulipa") == 0){
            
            for(contador = 0; contador < 4; contador++){
                
                vidaBowser = vidaBowser - 50;
                
            }
            
        } else if(strcmp(flor, "Girassol") == 0){
            
            for(contador = 0; contador < 4; contador++){
                
                vidaBowser = vidaBowser - 73;
                
            }
            
        }
        
    } else if (strcmp(player, "Luigi") == 0){
        
        if(strcmp(flor, "Rosa") == 0){
            
            for(contador = 0; contador < 4; contador++){
                
                vidaBowser = vidaBowser - 28;
                
            }
            
        } else if(strcmp(flor, "Tulipa") == 0){
            
            for(contador = 0; contador < 4; contador++){
                
                vidaBowser = vidaBowser - 45;
                
            }
            
        } else if(strcmp(flor, "Girassol") == 0){
            
            for(contador = 0; contador < 4; contador++){
                
                vidaBowser = vidaBowser - 70;
                
            }
            
        }
        
    }
    
    if (vidaBowser >= 0){
        
        printf("Lascou-se... O coisa feia fugiu com a Peach.");
        
    } else {
        
        printf("Uhuu! Peach está a salvo, cambada!");
        
    }

    return 0;
}


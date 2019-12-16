/*Flíper é um tipo de jogo onde uma bolinha de metal cai por
um labirinto de caminhos até chegar na parte de baixo do
labirinto. A quantidade de pontos que o jogador ganha
depende do caminho que a bolinha seguir. O jogador pode
controlar o percurso da bolinha mudando a posição de
algumas portinhas do labirinto. Cada portinha pode estar
na posição 0, que significa virada para a esquerda, ou na
posição 1 que quer dizer virada para a direita. Considere o
flíper da figura abaixo, que tem três portinhas. A portinha
Q está na posição 0 e a portinha R, na posição 1. Desse
jeito, a bolinha vai cair pelo caminho C.
Escreva um programa em C, que leia a posição das portinhas P, Q e R e indique em qual das saídas a
bolinha irá cair.*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int bifurcacao1, bifurcacao2; 
    printf("************************\n");
    printf("* Bem vindo ao flipper *\n");
    printf("************************\n");
    printf("\nHá três bifurcações pssíveis...\n");
    printf("escolha o seu caminho:\n\n");
    printf("0 - porta esquerca fechada e bolinha vai para a direita\n\n");
    printf("1 - porta direita fechada e bolinha vai para a esquerda\n\n");
    
    scanf("%d", &bifurcacao1);
    scanf("%d", &bifurcacao2);
    
    if(bifurcacao1 == 0){
        
        printf("A bolinha entrou pela bifurcação Q e está indo para a bifurcação R\n");
        
        if(bifurcacao2 == 0){
            
            printf("A bolinha está indo para a saída D\n");
            printf("Seu caminho foi Q R D\n");
            
        } else if (bifurcacao2 == 1){
            
            printf("A bolinha está indo para a saída C\n");
            printf("Seu caminho foi Q R C\n");
            
        } else {
            
            printf("Você só pode usar 0 ou 1 para escolher como a bolinha vai cair.\n");
            printf("Tente novamente.");
            
        }
        
    } else if (bifurcacao1 ==1){
        
       printf("A bolinha entrou pela bifurcação Q e está indo para a bifurcação P\n");
       
        if(bifurcacao2 == 0){
            
            printf("A bolinha está indo para a saída A\n");
            printf("Seu caminho foi Q P A\n");
            
        } else if (bifurcacao2 == 1){
            
            printf("A bolinha está indo para a saída C\n");
            printf("Seu caminho foi Q P B\n");
            
        } else {
            
            printf("Você só pode usar 0 ou 1 para escolher como a bolinha vai cair.\n");
            printf("Tente novamente.");
            
        }
        
        
    } else {
        
        printf("Você só pode usar 0 ou 1 para escolher como a bolinha vai cair.\n");
        printf("Tente novamente.");
        
    }
    
    return 0;
}

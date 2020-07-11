/*jogo da velha*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int quadrado[10] = {'0','1','2','3','4','5','6','7','8','9'};
int escolha, jogador;

int verifGanhou();
void quadro();
void marcaQuadro(char marca);


int main()
{
    int jogoAcabou;
    char marca;
    
    jogador = 1;
    
    do{
        
       quadro();
       jogador = (jogador % 2) ? 1 : 2;
       
       printf("Escolha um número do quadro, jogador %d.\n", jogador);
       scanf("%d", &escolha);
       
       marca = (jogador == 1) ? 'x' : 'o';
       
       marcaQuadro(marca);
       
       jogoAcabou = verifGanhou();
       
       jogador++;
        
    }while(jogoAcabou == -1);
    
    if (jogoAcabou == 1){
        
        printf("Jogador %d ganhou!", --jogador);
        
    } else {
        
        printf("Vocês empataram");
        
    }
    
    return 0;
}

/* 

A função abaixo vai: retornar 1 caso alguém vença;
                     retornar 0 em caso de empate e;
                     retornar -1 caso o jogo ainda esteja em curso.
          
*/

int verifGanhou(){
    
    int valorRetorno = 0;
    
    if (quadrado[1] == quadrado[2] && quadrado[2] == quadrado[3]){
   
        valorRetorno = 1;
   
    } else if (quadrado[1] == quadrado[4] && quadrado[4] == quadrado[7]){
   
        valorRetorno = 1;
   
    } else if (quadrado[1] == quadrado[5] && quadrado[5] == quadrado[9]){
   
        valorRetorno = 1;
   
    } else if (quadrado[2] == quadrado[5] && quadrado[5] == quadrado[8]){
   
        valorRetorno = 1;
   
    }else if (quadrado[3] == quadrado[6] && quadrado[6] == quadrado[9]){
   
        valorRetorno = 1;
   
    } else if (quadrado[3] == quadrado[5] && quadrado[5] == quadrado[7]){
   
        valorRetorno = 1;
   
    } else if (quadrado[4] == quadrado[5] && quadrado[5] == quadrado[6]){
   
        valorRetorno = 1;
   
    } else if (quadrado[7] == quadrado[8] && quadrado[8] == quadrado[9]){
        
        valorRetorno = 1;
        
    } else if (quadrado[1] != '1' && quadrado[2] != '2' && quadrado[3] != '3' &&
        quadrado[4] != '4' && quadrado[5] != '5' && quadrado[6] != '6' &&
        quadrado[7] != '7' && quadrado[8] != '8' && quadrado[9] != '9'){
            
            valorRetorno = 0;
            
    } else {
        
        valorRetorno = -1;
        
    }
    
    return valorRetorno;
    
}

/* 

A função abaixo vai mostrar o jogo na tela. 

*/

void quadro(){
    
 system("cls");
    printf("Jogo da Véa");
    
    printf("Jogador 1 (x) - Jogador 2 (o)\n\n\n");
    
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", quadrado[1], quadrado[2], quadrado[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", quadrado[4], quadrado[5], quadrado[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", quadrado[7], quadrado[8], quadrado[9]);

    printf("     |     |     \n\n");
    
}

void marcaQuadro(char marca){
    
    if (escolha == 1 && quadrado[1] == '1'){
        
        quadrado[1] = marca;
        
    } else if (escolha == 2 && quadrado[2] == '2'){
        
        quadrado[2] = marca;
        
    } else if (escolha == 3 && quadrado[3] == '3'){
        
        quadrado[3] = marca;
        
    } else if (escolha == 4 && quadrado[4] == '4'){
        
        quadrado[4] = marca;
        
    } else if (escolha == 5 && quadrado[5] == '5'){
        
        quadrado[5] = marca;
        
    } else if (escolha == 6 && quadrado[6] == '6'){
        
        quadrado[6] = marca;
        
    } else if (escolha == 7 && quadrado[7] == '7'){
        
        quadrado[7] = marca;
        
    } else if (escolha == 8 && quadrado[8] == '8'){
        
        quadrado[8] = marca;
        
    } else if (escolha == 9 && quadrado[9] == '9'){
        
        quadrado[9] = marca;
        
    } else {
        
        printf("Valor inválido.");
        jogador--;
        getch();
        
    }
        
}

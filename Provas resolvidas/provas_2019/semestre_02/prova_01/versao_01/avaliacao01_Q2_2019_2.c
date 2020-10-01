/*Poker é um dos jogos de cartas mais jogados, e o poker do Rei é uma das suas variações. 
O jogo é jogado com um baralho normal de 52 cartas. Cada carta tem um dos quatro naipes e
uma das 13 categorias. Entretanto, no poker do Rei, os naipes das cartas não são relevantes,
enquanto que as categorias são.

Aces são representados pela letra A - (categoria 1)

Demais cartas - (categorias 2, 3, 4, 5, 6, 7, 8, 9, 10);

Jacks são representados pela letra J - (categoria 11);

Queens são representadas pela letra Q - (categoria 12);

Kings são representados pela letra K - (categoria 13);

O nome do jogo vem do fato de que no Poker do Rei, o Rei é a carta com a categoria mais alta.
No entanto, esta não é a única diferença entre Poker regular e Poker do Rei. Aos jogadores do
Poker do Rei, são distribuídos uma mão de apenas três cartas . Existem três tipos de mãos.

I. Um set, feito de três cartas da mesma categoria; ex:  Q Q Q 

II. Um par que contém duas cartas da mesma categoria, com a outra carta sem correspondente; ex: K K A

III. Um não-par, onde não tem-se duas cartas da mesma categoria. ex: K A Q

As mãos são classificadas usando as seguintes regras:

- Qualquer set derrota qualquer par e não-par;

- Qualquer par derrota qualquer não par;

- Um set formado com cartas de categoria maior derrota qualquer set formado com cartas de categoria menor;

- Se as cartas emparelhadas de dois pares têm categorias diferentes, então o par com as cartas emparelhadas
de maior categoria derrota o par com as cartas emparelhadas de menor categoria;

- Se as cartas emparelhadas de dois pares têm a mesma categoria, então as cartas não emparelhadas de ambos
os pares são comparadas; o par com carta não emparelhada de maior categoria derrota o par com carta não
emparelhada de menor categoria, a menos que ambas as cartas não emparelhadas sejam da mesma categoria, caso 
no qual temos um empate;

Uma nova empresa de software quer oferecer jogos de Poker do Rei no seu site de jogos e precisa de um programa 
que, dada duas mãos de Poker do Rei, determine qual delas é a vencedora. Escreva um programa em C que resolva a 
questão.

*/
#include <stdio.h>

int main()
{
    int mao1, mao2, carta1, carta2, carta3, carta4, carta5, carta6;
    
    printf("Informe as categorias das cartas da primeira mão:\n");
    scanf("%d%d%d", &carta1, &carta2, &carta3);
    
    printf("Informe as categorias das cartas da segunda mão:\n");
    scanf("%d%d%d", &carta4, &carta5, &carta6);
    
        mao1 = carta1 + carta2 + carta3;
        mao2 = carta4 + carta5 + carta6;
    
    if (carta1 <= 0 || carta2 <= 0 || carta3 <= 0 || carta4 <= 0 || carta5 <= 0 || carta6 <= 0
        || carta1 > 13 || carta2 > 13 || carta3 > 13 || carta4 > 13 || carta5 > 13 || carta6 > 13
        || mao1 > 52 || mao2 > 52 || mao1 <= 0 || mao1 <= 0){
            
            printf("Categoria inválida.\n");
            
    } else if ((carta1 == carta2 && carta2 == carta3) &&
               (carta4 == carta5 && carta5 == carta6)){
        
        if(mao1 > mao2){
            
            printf("Primeira mão venceu.");
            
        } else if (mao1 < mao2){
            
            printf("Segunda mão venceu.");
            
        } else {
            
            printf("Empate");
            
        }
        
    } else if((carta1 == carta2 && carta2 == carta3) && 
             ((carta4 == carta5 || carta4 == carta6 || carta5 == carta6) ||
             (carta4 != carta5 && carta4 != carta6 && carta5 != carta6))){
        
        printf("Primeira mão venceu.");
        
    } else if((carta4 == carta5 && carta5 == carta6) &&
             ((carta1 == carta2 || carta1 == carta3 || carta2 == carta3) ||
             (carta1 != carta2 && carta2 != carta3 && carta1 != carta3))){
        
        printf("Segunda mão venceu.");
        
    } else if ((carta1 == carta2 || carta1 == carta3 || carta2 == carta3) &&
               (carta4 == carta5 || carta4 == carta6 || carta5 == carta6)){
        
        if(mao1 > mao2){
            
            printf("Primeira mão venceu.");
            
        } else if (mao1 < mao2){
            
            printf("Segunda mão venceu.");
            
        } else {
            
            printf("Empate");
            
        }
        
    } else if ((carta1 != carta2 && carta1 != carta3 && carta2 != carta3) &&
              (carta4 != carta5 && carta4 != carta6 && carta5 != carta6)){
        
        if(mao1 > mao2){
            
            printf("Primeira mão venceu.");
            
        } else if (mao1 < mao2){
            
            printf("Segunda mão venceu.");
            
        } else {
            
            printf("Empate");
            
        }
        
    } else if ((carta1 == carta2 || carta1 == carta3 || carta2 == carta3) &&
               (carta4 != carta5 && carta4 != carta6 && carta5 != carta6)) {
            
        printf("Primeira mão venceu.");
            
    } else if ((carta4 == carta5 || carta4 == carta6 || carta5 == carta6) &&
              (carta1 != carta2 && carta1 != carta3 && carta2 != carta3)) {
            
        printf("Segunda mão venceu.");
            
    }
    
    return 0;
    
}

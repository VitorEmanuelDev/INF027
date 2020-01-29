/* Questão 05 Prof. Luiz Machado

Ambrósio gosta muito de jogar videogame e como um jogador profissional,
ele resolveu criar uma relação entre o preço dos jogos e sua dificuldade.

Ele descobriu que todos os anos os jogos ficam mais baratos, mas tem alguns
que por conta da dificuldade continuam com um preço mais elevado, já que são
desafiadores e são mais comprados.

Ambrósio separou a dificuldade dos jogos numa tabela de 0 a 5, e calculou de
acordo com os preços dos jogos no presente, descobrindo regras que medirão com
uma boa precisão quanto será o preço do mesmo jogo ano que vem. As regras foram:

Se o jogo tem dificuldade 0, o preço cairá em 25%.

Se o jogo tem dificuldade 1, o preço cairá em 20%.

Se o jogo tem dificuldade 2, o preço cairá em 18%.

Se o jogo tem dificuldade 3, o preço cairá em 15%.

Se o jogo tem dificuldade 4, o preço cairá em 12%.

Se o jogo tem dificuldade 5, o preço cairá em 10%.

Mas existe um porém. Quando o jogo já está muito desvalorizado, ou seja, já está 
abaixo ou igual a R$ 100.00 no ano atual, o preço só cai metade do que deveria, até
um mínimo de R$ 45.00.

Sabendo que você é programador, Ambrósio pediu para que criasse um programa para calcular
o preço de N jogos após 3 anos que é o tempo máximo que ele está disposto a esperar para comprar.

exemplos de entrada e saída se formos avaliar 3 jogos:

2 400       jogo[0] = R$ 220.55    
1 200       jogo[1] = R$ 102.40    
5 30        jogo[2] = R$ 30.00    

*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int jogos, contador, dificuldade;
    float preco, precoDesconto;
    
    printf("Quantos jogos deseja avaliar?\n");
    scanf("%d", &jogos);
    
    if (jogos < 0){
            
            printf("Número inválido.\n");
            
        }
        
    for(contador = 0; contador < jogos; contador++){
        
        printf("\nQual a dificuldade do jogo[%d]?\n", contador);
        scanf("%d", &dificuldade);
        printf("Qual o preço do jogo[%d]?\n", contador);
        scanf("%f", &preco);
        
        if (preco <= 100 && preco >= 45){
            
            precoDesconto = preco * 0.5;
            
            if(precoDesconto <= 45){
                
                precoDesconto = 45;
                
            }
            
        } else if (preco < 45){
            
            precoDesconto = preco;
            
        }
        
        if (dificuldade < 0 || dificuldade > 5){
            
            printf("Número inválido.\n");
            break;
            
        }
        
        if (preco < 0){
            
            printf("Número inválido.\n");
            break;
            
        }
        
            
        if (dificuldade == 0 && preco > 100){
            
            precoDesconto = preco * pow(0.75,3);
            
        } else if (dificuldade == 1 && preco > 100){
            
            precoDesconto = preco * pow(0.8,3);
            
        } else if (dificuldade == 2 && preco > 100){
            
            precoDesconto = preco * pow(0.82,3);
            
        }else if (dificuldade == 3 && preco > 100){
            
            precoDesconto = preco * pow(0.85,3);
            
        }else if (dificuldade == 4 && preco > 100){
            
            precoDesconto = preco * pow(0.88,3);
            
        }else if (dificuldade == 5 && preco > 100){
            
            precoDesconto = preco * pow(0.9,3);
            
        }
        
        printf("jogo[%d] = R$ %.2f", contador, precoDesconto);
        
    }

    return 0;
}

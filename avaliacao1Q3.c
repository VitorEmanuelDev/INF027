/*Arquimedes acaba de mudar de escola e a primeira coisa que percebeu na nova escola é que a gangorra
do parquinho não é simétrica, uma das extremidades é mais longa que a outra. Após brincar algumas
vezes com um amigo de mesmo peso, ele percebeu que quando está em uma extremidade, a gangorra
se desequilibra para o lado dele (ou seja, ele fica na parte de baixo, e o amigo na parte de cima), mas
quando eles trocam de lado, a gangorra se desequilibra para o lado do amigo. Sem entender a situação,
Arquimedes pediu ajuda a outro amigo de outra série, que explicou que o comprimento do lado
interfere no equilíbrio da gangorra, pois a gangorra estará equilibrada quando P1 x C1 = P2 x C2, onde P1
e P2 são os pesos da criança no lado esquerdo e direito, respectivamente, e C1 e C2 são os
comprimentos da gangorra do lado esquerdo e direito, respectivamente. Com a equação, Joãozinho já
consegue dizer se a gangorra está equilibrada ou não, mas, além disso, ele quer saber para qual lado a
gangorra descerá caso esteja desequilibrada. Escreva um programa em C, que leia os pesos das crianças
e os comprimentos dos lados da gangorra, calcule e diga se a gangorra ficará equilibrada, penderá pro
lado 1 ou pro lado 2.*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int C1, C2, P1, P2, E1, E2;
    
    printf("Informe o peso de cada criança(P1 e P2).\n");
    scanf("%d%d", &P1, &P2);
    
    printf("\nInforme o comprimento de cada gangorra.\n");
    scanf("%d%d", &C1, &C2);
    
    E1 = P1 * C1; 
    E2= P2 * C2;
    
    if(E1 > E2){
      
      printf("A gangorra está pendendo para o lado 1.");
        
    } else if(E1 < E2){
      
      printf("A gangorra está pendendo para o lado 2.");
        
    } else {
        
      printf("O lado 1 e o lado 2 estão em equilíbrio.");
        
    }

    return 0;
}


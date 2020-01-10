/*Um certo aço é classificado de acordo com o resultado
de três testes abaixo, que devem determinar se o mesmo
satisfaz as especificações:

1. Conteúdo de Carbono abaixo de 7;
2. Dureza Rockwell maior do que 50;
3. Resistência á tração maior do que 80.000 psi;

Ao aço é atribuído o grau “10” se passar por todos os teste;
grau “9” se passar somente nos testes 1 e 2; 
grau “8” se passar no teste 1; 
grau “7” se não passar nos 3 testes.

Desenvolver um algoritmo/programa que lê o conteúdo do carbono (CC), a dureza Rockwell (DR) e a resistência à
tração (RT) e fornece a classificação do aço
*/

#include <stdio.h>

int main()
{
    float carbono, rockwell, resistencia;
    
    printf("Informe a porcentagem do conteúdo de Carbono:\n");
    scanf("%f", &carbono);
    
    printf("Informe a dureza Rockwell:\n");
    scanf("%f", &rockwell);
    
    printf("Informe o índice de ressitência à tração em psi's:\n");
    scanf("%f", &resistencia);
    
    
    if(carbono < 7 && rockwell > 50 && resistencia > 80000){
        
        printf("Aço de grau 10.");
        
    } else if(carbono < 7 && rockwell > 50 && resistencia < 80000){
        
        printf("Aço de grau 09.");
        
    } else if(carbono < 7 && rockwell < 50 && resistencia < 80000){
        
        printf("Aço de grau 08.");
        
    } else if(carbono > 7 && rockwell < 50 && resistencia < 80000){
        
        printf("Aço de grau 07.");
        
    }
    

    return 0;
}

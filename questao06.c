/*  Questão 06 Prof Luiz Machado

Antes de sair da sua cidade, Biu resolveu dar uma olhada
no Pokemon Contest que estava acontecendo. Nos arredores do local,
estava sendo divulgado o Desafio Pokémon, um evento que faz uma série
de perguntas aos competiores se determinado tipo de ataque de pokemon
possui vantagem ou não em relação a outro tipo de Pokémon. Como Biu estava
interessado no prêmio, ele pediu para você escrever um programa que o ajudasse
a treinar para o evento.

Arelação para cada tipo de pokémon presente no desafio é dado na tabela a seguir,
considerando o sentido de ataque para defesa.


ex: ataque fogo > planta
    ataque plata > água
    ataque água > fogo
    
Formato de entrada 

A - string

D - string


A primeira linha de netrada é composta por uma string, representando o tipo de ataque
usado pelo pokémon que está atacando.

A segunda linha de entrada é composta por uma string, representando o tipo de pokémon
que está defendendo.

Considere que o padrão de entrada do texto possui a letra inicial maiúscula e o restante
minúscula, sem acentos(ex: Agua)

Formato de entrada 

restante
R - string 

-"Vantagem" quando o tipo de pokémon de ataque possui vantagem sobre o pokemon de defesa
-"Desvantagem" quando o tipo de pokémon de ataque possui desvantagem em relação ao pokemon de defesa
-"Empate" quando o tipo de pokémon de ataque e o pokemon de defesa são iguais

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char ataque[25], defesa[25];
    
    printf("Informe o tipo de pokémon do ataque e o tipo de pokémon da defesa:\n");
    scanf("%s%s", ataque, defesa);
    
    if (strcmp(ataque, "Fogo") == 0 && strcmp(defesa,"Planta") == 0){
        
        printf("Vantagem");
        
    } else if (strcmp(ataque, "Fogo") == 0 && strcmp(defesa,"Agua") == 0){
        
        printf("Desvantagem");
        
    } else if (strcmp(ataque, "Agua") == 0 && strcmp(defesa,"Fogo") == 0){
        
        printf("Vantagem");
        
    } else if (strcmp(ataque, "Agua") == 0 && strcmp(defesa,"Planta") == 0){
        
        printf("Desvantagem");
        
    } else if (strcmp(ataque, "Planta") == 0 && strcmp(defesa,"Agua") == 0){
        
        printf("Vantagem");
        
    } else if (strcmp(ataque, "Planta") == 0 && strcmp(defesa,"Fogo") == 0){
        
        printf("Desvantagem");
        
    } else {
        
        printf("Empate");
        
    }

    return 0;
}


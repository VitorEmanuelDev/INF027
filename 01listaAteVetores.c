/*Faça um programa que apresente o menu de opções a seguir:

Menu de opções:
1. Média aritmética
2. Média ponderada
3. Sair

Digite a opção desejada. Na opção 1: receber duas notas, calcular e mostrar a
média aritmética. Na opção 2: receber três notas e seus respectivos pesos,
calcular e mostrar a média ponderada. Na opção 3: sair do programa.*/

#include <stdio.h>

int main()
{
    int opcao, peso1, peso2, peso3;
    
    float nota1, nota2, nota3, media;
    
    printf("Menu de opções:\n");
    printf("1. Média aritmética\n");
    printf("2. Média ponderada.\n");
    printf("3. Sair.\n");
    scanf("%d", &opcao);
    
    if(opcao == 1){
        
        printf("Informe duas notas:\n");
        scanf("%f%f", &nota1, &nota2);
        
        media = (nota1 + nota2)/2;
        printf("Média: %.2f", media);
        
    } else if(opcao == 2){
        
        printf("Informe três notas e, depois, seus respectivos pesos:\n");
        scanf("%f%f%f", &nota1, &nota2, &nota3);
        scanf("%d%d%d", &peso1, &peso2, &peso3);
        
        media = ((nota1 * peso1 ) + (nota2 * peso2) + (nota3 * peso3))/(peso1 + peso2 + peso3);
        printf("Média: %.2f", media);
        
    } else{
        
        printf("Sair do programa");
        
    }

    return 0;
}

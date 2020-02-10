/*
Questão	III	
  
Escreva um programa em C, que leia quatro notas de um	
aluno e imprima a nota final deste aluno. O cálculo da	
nota final, é feito descartando‐se a menor da squatro	
notas e calculando a média aritmética das três notas	
restantes.	

*/
#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, nota4, media;
    
    printf("Informe quatro notas:\n");
    scanf("%f%f%f%f", &nota1, &nota2, &nota3, &nota4);

    if (nota1 < nota2 || nota1 < nota3 || nota1 < nota4){
        
        media = (nota2 + nota3 + nota4)/3;
        printf("Média: %.2f", media);
        
    } else if (nota2 < nota1 || nota2 < nota3 || nota2 < nota4){
        
        media = (nota1 + nota3 + nota4)/3;
        printf("Média: %.2f", media);
        
    } else if (nota3 < nota1 || nota3 < nota4 || nota3 < nota2){
        
        media = (nota2 + nota1 + nota4)/3;
        printf("Média: %.2f", media);
        
    } else if (nota4 < nota1 || nota4 < nota3 || nota4 < nota2){
        
        media = (nota2 + nota3 + nota1)/3;
        printf("Média: %.2f", media);
        
    }

    return 0;
}

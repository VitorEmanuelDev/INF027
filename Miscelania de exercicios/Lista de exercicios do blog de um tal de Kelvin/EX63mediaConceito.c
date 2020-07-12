/*Escreva um algoritmo que leia a matrícula,
as 3 notas obtidas por um aluno nas 3 verificações
parciais e a média dos exercícios (ME) que fazem 
parte da avaliação. Calcule a média de aproveitamento,
usando a fórmula: 

média de aproveitamento = (VP1A + (VP1B * 2) + (VP2 * 3) + ME) / 7 

A atribuição dos conceitos obedece à tabela abaixo:

média de aproveitamento 

conceito 

>= 9.0 A 
>= 7.5 e < 9.0 B 
>= 6.0 e < 7.5 C 
>= 4.0 e < 6.0 D
< 4.0 E 

O algoritmo deve escrever a matrícula do aluno,
as notas das verificações, a média dos exercícios,
a média de aproveitamento, o conceito correspondente
e a mensagem ‘aprovado’ caso o conceito seja A, B ou C,
e ‘reprovado’ caso o conceito seja D ou E.

*/

#include <string.h>
#include <stdio.h>

int main()
{
    int matricula;
    char conceito;
    float nota1, nota2, nota3, exercicios, media;
    
    printf("Informe o número de matrícula do aluno:\n");
    scanf("%d", &matricula);
    
    printf("Informe as três notas obtidas e a média dos exercícios.\n");
    scanf("%f%f%f%f", &nota1, &nota2, &nota3, &exercicios);
    
    media = (nota1 + (nota2 * 2) + (nota3 * 3) + exercicios)/7;
    
    if(media >= 9.0){
        
        conceito = 'A';
        printf("Aprovad@!\n");
        
    }else if(media >= 7.5 && media < 9.0){
        
        conceito = 'B'; 
        printf("Aprovad@!\n");
        
    }else if(media >= 6.0 && media < 7.5){
        
        conceito = 'C';
        printf("Aprovad@!\n");
        
    }else if(media >= 4.0 && media < 6.0){
        
        conceito = 'D';
        printf("Reprovad@.\n");
        
    }else if(media < 4.0){
        
        conceito = 'E';            
        printf("Reprovad@.\n");
        
    }
    
    printf("O alun@ de matrícula %d obteve as notas %.2f, %.2f, %.2f e %.2f\n", matricula, nota1, nota2, nota3, exercicios); 
    printf("A média de aproveitamento foi de %.2f\nConceito %c\n", media, conceito);

    return 0;
}

/*Fazer um algoritmo que calcule a média aritmética das
3 notas de um aluno e mostre, além do valor da média,
uma mensagem de “Aprovado”, caso a média seja igual ou
superior a 6, ou a mensagem “reprovado”, caso contrário.*/

#include <stdio.h>

int main()
{
    float media, nota1, nota2, nota3;
    
    printf("Informe as três notas do semestre.\n");
    scanf("%f%f%f", &nota1, &nota2, &nota3);
    
    media = (nota1 + nota2 + nota3)/3;
    
    if (media >= 5){
        
        printf("Passou mizeravi!\n");
        printf("média %.2f", media);
        
    } else {
        
        printf("Infelizmente, você não passou.\n");
        printf("média %.2f", media);
        
    }

    return 0;
}

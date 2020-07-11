/*Escrever um algoritmo que leia o código de
um aluno e suas três notas. Calcular a média
ponderada do aluno, considerando que o peso
para a maior nota seja 4 e para as duas restantes,
3. Mostre o código do aluno, suas três notas,
a média calculada e uma mensagem “Aprovado” se
a média for maior ou igual a 5 e “reprovado” 
se a média for menor que 5.*/

#include <stdio.h>

int main()
{
    int codigo;
    float nota1, nota2, nota3, media;
    
    printf("Informe o código do aluno.\n");
    scanf("%d", &codigo);
    
    printf("Informe as três notas obtidas pelo aluno %d", codigo);
    scanf("%f%f%f", &nota1, &nota2, &nota3);
    
    if(nota1 > nota2 && nota1 > nota3){
        
        media = ((nota1 * 4) + (nota2 * 3) + (nota3 * 3))/10;
        
    }else if(nota2 > nota1 && nota2 > nota3){
        
        media = ((nota2 * 4) + (nota1 * 3) + (nota3 * 3))/10;
        
    }else if(nota3 > nota1 && nota3 > nota2){
        
        media = ((nota3 * 4) + (nota2 * 3) + (nota1 * 3))/10;
        
    }
    
    if(media >= 5){
        
        printf("O aluno %d teve %.2f, %.2f e %.2f e foi aprovado com uma média de %.2f", codigo, nota1, nota2, nota3, media);
        
    }else {
        
        printf("O aluno %d teve %.2f, %.2f e %.2f e foi reprovado com uma média de %.2f", codigo, nota1, nota2, nota3, media);
        
    }

    return 0;
}

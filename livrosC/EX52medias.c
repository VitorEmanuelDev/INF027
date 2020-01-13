/*Um usuário deseja um algoritmo onde possa
escolher que tipo de média deseja calcular a
partir de 3 notas. Faça um algoritmo que leia
as notas, a opção escolhida pelo usuário e calcule a média.

(a) aritmética
(b) ponderada (3,3,4)
(c) Harmônica*/

#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, media;
    char tipoMedia;
    
    printf("Informe as notas obtidas pelo aluno.\n");
    scanf("%f%f%f", &nota1, &nota2, &nota3);
    
    printf("Como deseja calcular a média?\n[a] Média aritmética\n[b] Média ponderada\n[c] Média hormônica\n");
    scanf(" %c", &tipoMedia);
    
    if(tipoMedia == 'a'){
        
        media = (nota1 + nota2 + nota3)/3;
        printf("A média aritmética foi de %.2f", media);
        
    } else if(tipoMedia == 'b'){
        
        media = ((nota1 * 3) + (nota2 * 3) + (nota3 * 4))/10;
        printf("A média poderada foi de %.2f", media);
        
    }else if(tipoMedia == 'c'){
        
        media = 3/((1/nota1) + (1/nota2) + (1/nota3));
        printf("A média harmônica foi de %.2f", media);
        
    }

    return 0;
}

//Faça um algoritmo para calcular a nota semestral de um aluno. A nota semestral é obtida pela média aritmética entre a nota de 2 bimestres. Cada nota de bimestre é composta por 2 notas de provas.

#include <stdio.h>

float main()
{
    float nota1, nota2, nota3, nota4, media1, media2, mediaFinal;
    
    printf("Informe a primeira nota do primeiro bimestre.\n");
    scanf("%f", &nota1);
    
    printf("Informe a segunda nota do primeiro bimestre.\n");
    scanf("%f", &nota2);
    
    printf("Informe a primeira nota do segundo bimestre.\n");
    scanf("%f", &nota3);
    
    printf("Informe a segunda nota do segundo bimestre.\n");
    scanf("%f", &nota4);
    
    media1 = (nota1 + nota2)/2;
    
    media2 = (nota3 + nota4)/2;
    
    mediaFinal = (media1 + media2)/2;
    
    printf("A média do primeiro semestre é de %.1f.\n", media1);
    
    printf("A média do segundo semestre é de %.1f.\n", media2);
    
    printf("A média final é de %.1f.\n", mediaFinal);
     
    return 0;
}

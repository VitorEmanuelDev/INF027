/*Desenvolver um algoritmo para ler o nome,
idade e peso de três pessoas. Calcular e imprimir
idade e o peso médio das três pessoas.*/

#include <stdio.h>


int main()
{
    char name1[20], name2[20], name3[20];  
    float idade1, idade2, idade3, peso1, peso2, peso3, idadeMedia, pesoMedio;
    
    printf("Informe os nomes das três pessoas.\n");
    scanf("%s%s%s",name1, name2, name3);
    
    printf("Quais as idades de %s, %s e de %s?\n", name1, name2, name3);
    scanf("%f%f%f", &idade1, &idade2, &idade3);
    
    printf("Quanto pesam %s, %s e %s?\n",name1, name2, name3);
    scanf("%f%f%f", &peso1, &peso2, &peso3);
    
    idadeMedia = (idade1 + idade2 + idade3)/3;
    pesoMedio = (peso1 + peso2 + peso3)/3;
    
    printf("A média aproximada de idade entre %s, %s e %s é de %.0f anos.\n", name1, name2, name3, idadeMedia);
    
    printf("A média aproximada de peso entre %s, %s e %s é de %.0f anos.\n", name1, name2, name3, pesoMedio);

    return 0;
}

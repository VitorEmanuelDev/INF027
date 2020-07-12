/*Desenvolver um algoritmo para ler o número
de uma sala de aula, sua capacidade e o total
de alunos matriculados na mesma e imprimir uma
linha mostrando o número da sala, sua capacidade,
o número de cadeiras ocupadas e sua disponibilidade
indicando se a sala está lotada ou não.*/

#include <stdio.h>

int main()
{
    int numSala, capSala, alunosMat, ocupacao, disponibilidade;
    
    printf("Informe o número de sala.\n");
    scanf("%d", &numSala);
    
    printf("Informe a capacidade da sala.\n");
    scanf("%d", &capSala);
    
    printf("Informe a quantidade de alunos matriculados.\n");
    scanf("%d", &alunosMat);

    ocupacao = alunosMat - capSala;
    
    disponibilidade = ocupacao * -1;

    if (ocupacao == 0){
        
        printf("A sala %d, tem uma capacidade de %d , o número de cadeiras ocupadas foi de %d e sua disponibilidade atual é de %d. A sala está lotada.", numSala, capSala, alunosMat, disponibilidade);
        
    } else if (ocupacao < 0){
        
        printf("A sala %d, tem uma capacidade de %d , o número de cadeiras ocupadas foi de %d e sua disponibilidade atual é de %d. A sala não está lotada.", numSala, capSala, alunosMat, disponibilidade);
        
    } else {
        
        printf("A sala %d, tem uma capacidade de %d , o número de cadeiras ocupadas foi de %d e sua disponibilidade atual é de 0. A sala está lotada.", numSala, capSala, capSala);

    }
    return 0;
}

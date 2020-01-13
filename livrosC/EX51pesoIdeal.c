/*Tendo como dados de entrada a altura e o sexo
de uma pessoa, construa um algoritmo que calcule
seu peso ideal, utilizando as seguintes fórmulas:

• Para Homens: (72.7 *h) – 58;
• Para Mulheres: (62.1 * h) – 44.7*/

#include <stdio.h>
#include <string.h>

int main()
{   
    float altura, pesoIdeal;
    char sexo[15];

    printf("Informe a altura da pessoa em metros.\n");
    scanf("%f", &altura);
    
    printf("Informe o sexo da pessoa.\n");
    scanf("%s", sexo);
    
    if(strcmp(sexo,"masculino") == 0){
        
        pesoIdeal = (72.7 * altura) - 58;
        printf("O peso ideal da pessoa em questão é de: %.2f kg", pesoIdeal);
        
    } else if(strcmp(sexo,"feminino") == 0){
        
        pesoIdeal = (62.1 * altura) - 44.7;
        printf("O peso ideal da pessoa em questão é de: %.2f kg", pesoIdeal);
        
    }

    return 0;
}

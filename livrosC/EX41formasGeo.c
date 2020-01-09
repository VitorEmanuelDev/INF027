/*Desenvolver um algoritmo com as opções de calcular
e imprimir o volume e a área da superfície de um cone reto,
um cilindro ou uma esfera. O algoritmo deverá ler a opção da
figura desejada (cone / cilindro / esfera) e de acordo com a
opção escolhida calcular o volume e a área da superfície da
figura pedida. Fórmulas:*/

#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    float pi = 3.1415, raio, diametro, altura, volume, area, hipotenusa;
    char forma[15];
    
    printf("Qual a forma geométrica escolhida?\nCilindro, cone ou esfera?\n");
    scanf("%s", forma);
    
    printf("Informe o raio e a altura em cm.\n");
    scanf("%f%f", &raio, &altura);
    
    if (strcmp(forma, "cilindro") == 0){
        
        volume = (pow(raio,2) * pi) * altura;
        area = altura * (raio * 2 * pi) + 2 * (raio * 2 * pi);
        printf("O volume é de %.2f cm³ a área é de %.2f cm²", volume, area);
        
    } else if (strcmp(forma, "cone") == 0){
        
        volume = ((pow(raio,2) * pi) * altura)/3;
        hipotenusa = sqrt(pow(raio,2) + pow(altura,2));
        area = (pi * pow(hipotenusa,2))/4 + (pi * pow(raio,2));
        printf("O volume é de %.2f cm³ a área é de %.2f cm²", volume, area);
        
    } else if (strcmp(forma, "esfera") == 0){
        
        volume = (4/3) * (pow(raio,3) * pi);
        area = 4 * pi * pow(raio,2);
        printf("O volume é de %.2f cm³ a área é de %.2f cm²", volume, area);
        
    }

    return 0;
}

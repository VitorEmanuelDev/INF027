/*4 - Faça um programa que receba a idade, o peso, a altura, a cor dos olhos (A-azul; P- preto; V-
verde; e C-castanho) e a cor dos cabelos (P-preto; C-castanho; L-louro; e R-ruivo) de seis

pessoas, e que calcule e mostre:
a. A quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg;
b. A médias das idades das pessoas com altura inferior a 1,50 m;
c. A porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas;
d. A quantidade de pessoas ruivas e que não possuem olhos azuis.*/

#include <stdio.h>


int main()
{
    int i, idade, pessoas, pessoa50Menos60 = 0, pessoaMenos150 =0, olhosAzuis = 0, ruivaNaoAzul = 0;
    float peso, altura, mediaMenos150 = 0, IdadeMenos150 = 0, mediaOlhosAzuis = 0;
    char olhos, cabelos;
    
    printf("Quantas pessoas farão parte da pesquisa?\n");
    scanf("%d", &pessoas);
    
    for(i = 0; i < pessoas; i++){
        
        printf("Informe a idade da %dª pessoa.\n", i + 1);
        scanf("%d", &idade);
        printf("Informe a altura (cm) e o peso (Kg) da %dª pessoa.\n", i + 1);
        scanf("%f%f", &altura, &peso);
        printf("Informe a cor dos olhos da %dª pessoa.\n", i + 1);
        scanf("%c ", &olhos);
        printf("Informe a cor dos cabelos da %dª pessoa.\n", i + 1);
        scanf("%c ", &cabelos);
        
        if(idade > 50 && peso < 60){
            
            pessoa50Menos60++;
            
        } else if(altura < 150){
            
            pessoaMenos150++;
            IdadeMenos150 += idade;
            mediaMenos150 = IdadeMenos150/pessoaMenos150;
            
        } else if(olhos == 'A'){
            
            olhosAzuis++;
            mediaOlhosAzuis = (olhosAzuis/pessoas) * 100;
            
        } else if(olhos == 'A' && cabelos == 'R'){
            
            ruivaNaoAzul++;
            
        }
        
    }
    
    printf("Há %d pessoas com mais de 50 anos e menos de 60 Kg.\n", pessoa50Menos60);
    printf("A média da idade das pessoas com altura inferior a 150 cm é %.1f.\n", mediaMenos150);
    printf("A média de pessoas com olhos azuis no grupo analisado foi de %.1f.\n", mediaOlhosAzuis);
    printf("Há %d pessoas ruivas que não possuem olhos azuis.\n", ruivaNaoAzul);
    

    return 0;
}

/*Construa um algoritmo que calcule e escreva o custo
e a quantidade de latas de tinta necessárias, para
pintar tanques cilíndricos de combustível. São fornecidas
as seguintes informações: o preço da lata de 5 litros,
o raio e a altura dos tanques cilíndricos. Cada litro
de tinta pinta 3 metros quadrados.

https://pt.stackoverflow.com/questions/75653/arredondamento-em-c

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.1415

int main()
{
    float precoLata, raioTanque, alturaTanque, areaTanques, custoPintura;
    float numTanques, numLatas, litrosLata = 5, superficieLitro = 3;
    
    printf("Informe o preço da lata de 5 l.\n");
    scanf("%f", &precoLata);
    
    printf("Informe também o raio e a altura, em metros, dos tanques que serão pintados.\n");
    scanf("%f%f", &raioTanque, &alturaTanque);
    
    printf("Quantas tanques que serão pintados?\n");
    scanf("%f", &numTanques);
    
    areaTanques = numTanques * ((pi * pow(raioTanque, 2) * 2 ) + (pi * raioTanque * 2 * alturaTanque));
    
    printf("Área total dos tanques: %.2f m².\n", areaTanques);
    
    numLatas = areaTanques/(litrosLata * superficieLitro);
   
    printf("Serão necessárias pelo menos %.0f latas.\n", ceil(numLatas));
    
    custoPintura = ceil(numLatas) * precoLata;
    
    printf("A pintura de %.0f tanques com as dimensões informadas custa R$ %.2f", numTanques, custoPintura);
    
    return 0;
}

/*Escreva um algoritmo que leia 2 valores (x e y), que devem representar as coordenadas
de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o
ponto, ou se está sobre um dos eixos cartesianos ou na origem (x=y=0).*/

#include <stdio.h>

int main()
{
    float x, y;
    int plano1 = 1, plano2 = 2, plano3 = 3, plano4 = 4, origem = 0;
    char abcs [] = "abcissa";
    char coord [] = "coordenada";
    
    printf("Informe o 1º número do par ordenado.\n");
    scanf("%f", &x);
    
    printf("Informe o 2º número do par ordenado.\n");
    scanf("%f", &y);
    
    if( y > 0 && x < 0){
        
        printf("O ponto (%.1f,%.1f) encontra-se no quadrante %d.", x,y, plano1);
        
    } else if( y > 0 && x > 0){
        
        printf("O ponto (%.1f,%.1f) encontra-se no quadrante %d.", x,y, plano2);
        
    } else if( y < 0 && x < 0){
        
        printf("O ponto (%.1f,%.1f) encontra-se no quadrante %d.", x,y, plano3);
        
    } else if( y < 0 && x > 0){
        
        printf("O ponto (%.1f,%.1f) encontra-se no quadrante %d.", x,y, plano4);
        
    } else if( y == 0 && x == 0){
        
        printf("O ponto (%.1f,%.1f) encontra-se na origem %d.", x,y, origem);
        
    } else if ( y == 0 && x != 0){
        
        printf("O ponto (%.1f,%.1f) encontra-se na %s.", x,y, abcs);
        
    } else if ( y != 0 && x == 0){
        
        printf("O ponto (%.1f,%.1f) encontra-se na %s.", x,y, coord);
    }

    return 0;
}

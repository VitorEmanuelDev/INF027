/*Fazer um algoritmo que dado três valores A, B e C
verificar se eles formam um triângulo. Formando triângulo,
dizer se é triângulo equilátero, isósceles ou escaleno.*/

#include <stdio.h>

int main()
{
    int A, B, C;
    
    printf("Informe as medidas dos três lados (A, B e C).\n");
    scanf("%d%d%d",&A, &B, &C);
    
    if (A > B + C || B > A + C || C > A + B ){
        printf("As medidas informadas não constituem um triângulo\n");
    }
    
    if (A == B && B == C){
        
        printf("O triângulo formado é equilátero.");
        
    } else if((A == B && B != C) || (A != B && B == C) || (A == C && B != C)){
        
        printf("O triângulo formado é isóceles.");
        
    } else if (A != B && B != C && A != C){
        
        printf("O triângulo formado é escaleno.");
        
    }
    

    return 0;
}

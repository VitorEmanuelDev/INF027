/*Fazer um algoritmo que dado os lados de um triângulo A, B e C.
Dizer se os lados formam um triângulo:

• Retângulo = (A² = B² + C²);
• Obtusângulo = (A² > B² + C²);
• Acutângulo = (A² < B² + C²) ;*/

#include <stdio.h>
#include <math.h>

int main()
{
    int A, B, C;
    
    printf("Informe as medidas dos três lados (A, B e C).\n");
    scanf("%d%d%d",&A, &B, &C);
    
    if (A > B + C || B > A + C || C > A + B ){
        
        printf("As medidas informadas não constituem um triângulo\n");
    }
    
    if ( pow(A,2) == pow(B,2) + pow(C,2)){
        
        printf("O triângulo formado é retângulo.");
        
    } else if(pow(A,2) > pow(B,2) + pow(C,2)){
        
        printf("O triângulo formado é obtusângulo.");
        
    } else if (pow(A,2) < pow(B,2) + pow(C,2)){
        
        printf("O triângulo formado é acutângulo.");
        
    }
    

    return 0;
}

/*5 - Seja f(x) = ax 2 +bx+c. Determine o que se pede:
a) Concavidade da função;
b) Delta da função;
c) Tipo de raízes;
d) Raízes (x’ e x”) da função;
e) Vértice (Xv e Yv) da função;
f) Os valores de f(x) | x[-10,10], variando em 1;
g) O programa deverá permitir que o usuário possa também digitar o valor de x via
teclado e informar o respectivo valor de f(x) via tela.*/

#include <stdio.h>
#include <math.h>

int main(void){
    
    printf("Seja f(x) = ax^2 + bx + c\n");
    
    float a;
    printf("Informe o valor de 'a':\n");
    scanf("%f", &a);
    
    float b;
    printf("Informe o valor de 'b':\n");
    scanf("%f", &b);
    
    float c;
    printf("Informe o valor de 'c':\n");
    scanf("%f", &c);
    
    //verifica se a equação é de segundo grau
    if(a == 0){
        
        printf("A equação informada não é de segundo grau.\n");
        return 0;
        
    }
    
    //verifica concavidade
    float concavidade = (a > 0) ? 1 : -1;
    
    if(concavidade == 1){
        
        printf("A concavidade da parábola é voltada para cima.\n");
        
    }else{
        
        printf("A concavidade da parábola é voltada para baixo.\n");
        
    }
 
    //verifica e calcula raizes
    float delta = pow(b, 2) - 4 * a * c;
    
    printf("Delta = %.2f\n", delta);
    
    if(delta < 0){
        
        printf("A equação não tem raiz real.\n");
        
    }else if(delta == 0){
        
        float raiz1 = -b / (2 * a);
        printf("Raiz = %.2f:\n", raiz1);
        
    }else{
        
        float raiz1 = -b + sqrt(delta) / (2 * a);
        float raiz2 = -b - sqrt(delta) / (2 * a);
        printf("Raiz 1 = %.2f:\n", raiz1);
        printf("Raiz 2 = %.2f:\n", raiz2);
        
    }
    
    //calcula vertice

    float verticeX = -1 * ( b / (2 * a) );
    float verticeY = delta / (4 * a);
    printf("Vertice = (%.2f , %.2f)\n", verticeX, verticeY);
    
    //Os valores de f(x) | x [-10,10], variando em 1;    
    printf("f(x) | x [-10, 10]\n");
    for(int x = -10; x <= 10; x++){
        
        float y = pow(a, 2) + b * x + c;
        printf("f(%d) = %.2f\n", x, y);
        
    }
    
    //escolha de x 
    float x;
    printf("Informe um valor de 'x':\n");
    scanf("%f", &x);
    
    float y = pow(a, 2) + b * x + c;
    printf("f(%.2f) = %.2f\n", x, y);

}

/*No Futebol Americano, usa-se o Quarterback Rating como um índice que indica o
desempenho do quarterback (quando maior, melhor). Ele é calculado como indicado a
seguir: Calcula-se o percentual de passes completados em relação aos passes tentados
pelo quarterback. Deste valor subtrai-se 0,3 e divide-se por 0,2. Este valor não deve ser
maior que 2,375 ou menor que 0 (caso seja, ajusta-se o valor para 2,375 ou 0,respectivamente).

Em seguida, calcula-se a razão de yards passadas pela quantidade de passes tentados.
Deste valor, subtrai-se 3 e divide-se por 4. Novamente, este valor não deve ser maior que
2,375 ou menor que 0 (caso seja, procede-se como no caso anterior).

Agora, calcula-se a razão de passes para touchdows pelo número de passes tentados.
Divide-se o valor por 0,05. Mais uma vez, este valor não deve ser maior que 2,375 ou
menor que 0 (caso seja, procede-se como de costume).

Então, calcula-se a razão entre passes interceptados e o número de passes tentados. Deste
valor, subtrai-se 0,095 e divide-se o resultado por 0,04. Como de praxe, este valor não
deve ser maior que 2,375 ou menor que 0 (caso seja, atua-se como explicado).

O quarterback rating é calculando somando-se as quatro parcelas anteriores,
multiplicando a soma por 100 e dividindo-se o produto por 6.

Escreva um programa, que leia o número de passes tentados, o número de passes
completos, o número de yards passados, o número de passes para touchdown e o número
de passes interceptados e informe o QB Rating do quarterback.*/

#include <stdio.h>

int main()
{
    char nome[30];
    float rating, a, b, c, d;
    float completions, attempts, yards, touchdowns, interceptions;
    
    printf("Qual o nome do quarterback?.\n");
    //suggestions: sacana. Apenas o primeiro nome aparecerá.
    scanf("%s", nome);
    
    printf("Informe o número de passes completos do %s.\n", nome);
    scanf("%f", &completions);
    
    printf("Informe o número de passes tentados pelo %s.\n", nome);
    scanf("%f", &attempts);
    
    printf("Informe o número de yards percorridos pelo %s.\n", nome);
    scanf("%f", &yards);
    
    printf("Informe o número de touchdowns originados pelo %s.\n", nome);
    scanf("%f", &touchdowns);
    
    printf("Informe o número de passes interceptados pelo %s.\n", nome);
    scanf("%f", &interceptions);
    
    a = ((completions/attempts)- 0.3)/ 0.2; 
    b = ((touchdowns/attempts) - 3)/ 0.5;
    c = ((interceptions/attempts) - 0.095)/ 0.04;
    d = ((yards/attempts)- 3)/ 4;
    
    if(a > 2.375){
        
        a = 2.375;
        
    } else if(a < 0){
        
        a = 0;
        
    } 
    
    if(b > 2.375){
        
        b = 2.375;
        
    } else if(b < 0){
        
        b = 0;
        
    }
    
    if(c > 2.375){
        
        c = 2.375;
        
    } else if(c < 0){
        
        c = 0;
        
    }
    
    if(d > 2.375){
        
        d = 2.375;
        
    } else if(d < 0){
        
        d = 0;
        
    }
   
   
    //a,b,c e d não podem ser maiores do que 2.375 ou menores que zero.
    
    rating = ((a + b + c + d)*100)/ 6;
    
    printf("O QB rating do %s foi de: %.3f.\n", nome, rating);
    
    if (rating > 100){
        
        printf("Esse %s joga muito!", nome);
        
    } else {
        
        printf("Esse %s está precisando de férias.", nome);    }
    
    return 0;
}


/*

The NFL passer rating formula includes four variables: completion percentage,
yards per attempt, touchdowns per attempt, and interceptions per attempt. Each 
of those variables is scaled to a value between 0 and 2.375, with 1.0 being 
statistically average (based on league data between 1960–1970). When the formula 
was first created, a 66.7 rating indicated an average performance, and a 100+ 
rating indicated an excellent performance. However, passing performance has 
improved steadily since then and in 2017 the league average rating was 88.6.

The four separate calculations can be expressed in the following equations:

    a = ((completions/attempts)- 0.3) * 5;
    b = ((yards/attempts)- 3) * 0.25;
    c = (touchdowns/attempts) * 20;
    d = (2.375 - (interceptions/attempts) * 25);


where

ATT = Number of passing attempts
COMP = Number of completions
YDS = Passing yards
TD = Touchdown passes
INT = Interceptions

If the result of any calculation is greater than 2.375, it is set to 2.375.
If the result is a negative number, it is set to zero.

Then, the above calculations are used to complete the passer rating:

A perfect passer rating (158.3) requires at least:[1]	A minimum rating (0.0) requires at best:

77.5% completion percentage
12.5 yards per attempt
11.875% TD/ATT (1 TD/8.421ATT)
No interceptions

30.0% completion percentage
3.0 yards per attempt
No touchdowns
9.5% INT/ATT (1INT/10.526ATT)

fonte

https://en.wikipedia.org/wiki/Passer_rating#:~:targetText=Passer%20rating%20(also%20known%20as,
primarily%20quarterbacks%2C%20in%20gridiron%20football.&targetText=Passer%20rating%20is%20
calculated%20using,yards%2C%20touchdowns%2C%20and%20interceptions.

*/

#include <stdio.h>

int main()
{
    char nome[30];
    float rating, a, b, c, d;
    float completions, attempts, yards, touchdowns, interceptions;
    
    printf("Qual o nome do quarterback?.\n");
    //suggestions: "sacana". Obs: Apenas o primeiro nome aparecerá com a configuração atual.
    scanf("%s", nome);
    
    printf("Informe o número de passes completos do %s.\n", nome);
    scanf("%f", &completions);
    
    printf("Informe o número de passes tentados pelo %s.\n", nome);
    scanf("%f", &attempts);
    
    printf("Informe o número de yards percorridos pelo %s.\n", nome);
    scanf("%f", &yards);
    
    printf("Informe o número de touchdowns originados pelo %s.\n", nome);
    scanf("%f", &touchdowns);
    
    printf("Informe o número de passes do %s que foram interceptados.\n", nome);
    scanf("%f", &interceptions);
    
    a = ((completions/attempts)- 0.3) * 5;
    b = ((yards/attempts)- 3) * 0.25;
    c = (touchdowns/attempts) * 20;
    d = (2.375 - (interceptions/attempts) * 25);
    
    
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
    
    rating = ((a + b + c + d) / 6)  *100;
    
    printf("O QB rating do %s foi de: %.3f.\n", nome, rating);
    
    if (rating > 90){
        
        printf("Esse %s joga muito!", nome);
        
    } else {
        
        printf("Esse %s está precisando melhorar", nome);    }
    
    return 0;
}



/*Em uma certificação são feitos são feitos 5 exames (I, II, III, IV e V). Escreva um
programa que leia as notas destes exames e imprima a classificação do aluno, sabendo
que a média é 70.
Classificação: A – passou em todos os exames;

B – passou em I, II e IV, mas não em III ou V;
C – passou em I e II, III ou IV, mas não em V.
Reprovado – outras situações.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notaI, notaII, notaIII, notaIV, notaV;
    
    printf("Informe a nota do primeiro exame.\n");
    scanf("%f", &notaI);
    
    printf("Informe a nota do segundo exame.\n");
    scanf("%f", &notaII);
    
    printf("Informe a nota do terceiro exame.\n");
    scanf("%f", &notaIII);
    
    printf("Informe a nota do quarto exame.\n");
    scanf("%f", &notaIV);
    
    printf("Informe a nota do quinto exame.\n");
    scanf("%f", &notaV);
    
    
    if(notaI > 70 && notaII > 70 && notaIII > 70 && notaIV > 70 && notaV > 70){
        
        printf("Parabéns! Você passou em todos os exames. Seu coeficiente foi 'A'.");
        
    } else if(notaI > 70 && notaII > 70 && notaIV > 70 && (notaIII < 70 || notaV < 70)){
        
        printf("Parabéns! Você passou em quase todos os exames. Seu coeficiente foi 'B'.");
        
    } else if((notaI > 70 && notaII > 70) && (notaIII > 70 || notaIV > 70) && notaV < 70){
        
        printf("Parabéns! Você passou em parte dos exames. Seu coeficiente foi 'C'.");
        
    }else {
        
        printf("Infelizmente, você não passou.");
        
    }

    return 0;
}

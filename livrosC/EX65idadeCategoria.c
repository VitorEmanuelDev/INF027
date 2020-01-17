/*Fazer um algoritmo que receba a idade e o nome
de um nadador e imprima o seu nome, a sua idade
e a categoria do mesmo, de acordo com as regras
a seguir: 

Categoria   Idade 

Criança     0 – 11 
Adolescente 12 – 18 
Jovem       19 – 25 
Adulto      25 – 60 
Idoso       Mais que 60

*/
#include <stdio.h>

int main()
{
    char nome[20];
    int idade;
    
    printf("Qual o nome d@ atleta?\n");
    scanf("%s", nome);

    printf("Qual a idade d@ %s?\n", nome);
    scanf("%d", &idade);
    
    if(idade >= 0 && idade <= 11){
        
        printf("%s tem %d anos e pertence à categoria 'Criança'.", nome, idade);
        
    }else if(idade >= 12  && idade <= 18){
        
        printf("%s tem %d anos e pertence à categoria 'Adolescente'.", nome, idade);
        
    }else if(idade >= 19  && idade < 25){
        
        printf("%s tem %d anos e pertence à categoria 'Jovem'.", nome, idade);
        
    }else if(idade >= 25  && idade <= 60){
        
        printf("%s tem %d anos e pertence à categoria 'Adult@'.", nome, idade);
        
    }else if(idade > 60){
        
        printf("%s tem %d anos e pertence à categoria 'Idos@'", nome, idade);
        
    }
    
    return 0;
}

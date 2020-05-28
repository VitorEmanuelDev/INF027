/* Tabela telefones*/
#include <stdio.h>

int main()
{
    //int i, j, k, linhas = 0, colunas = 0;
    //int tabela[linhas][colunas];
    //
    //printf("Quantas linhas terá a sua tabela?\n");
    //scanf("%i", &linhas);
    //
    //printf("Quantas colunas terá a sua tabela?\n");
    //scanf("%i", &colunas);
    //
    //for(i = 0; i < linhas; i++){
    //    
    //    for(j = 0; j < colunas; j++){
    //        
    //        scanf("%i", &tabela[i][j]);
    //        
    //    }
    //    
    //}
    
    int linha = 0;
    
    char tabela[100][100] = {"Miguel São Paulo (11)99999999","Rafael Salvador (11)998888888","Maria Recife (11)978888888"};
    
    do{
        
     printf("%s\n", tabela[linha]);   
        
    linha++;
    
    } while ( linha <= 3);
    

    return 0;
}

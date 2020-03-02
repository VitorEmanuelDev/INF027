/*Carl aprendeu recentemente o que é o sistema binário. Ele aprendeu, por exemplo, que
a representação binária de um inteiro positivo k é uma string An An−1...A1A0 onde cada Ai
é um dígito binário 0 ou 1, iniciando com An = 1, e de tal forma que k = Σ Ai × 2i. César,
o irmão mais velho de Carl, resolveu lhe propor um desafio: "Olhe Carl, eu tenho uma pergunta
fácil para você: eu te darei um valor inteiro, e você tem que me dizer quantos dígitos 1 existem
na representação binária deste número. Se prepare!". Carl aceitou o desafio.  Para ajudar Carl,
você deve escrever um algoritmo em C, que o ajude nesta tarefa. O algoritmo deverá ler um inteiro
entre 0 e 32 e imprimir o total de dígitos 1 existentes no número.  
 */
#include <stdio.h>

int main()
{
    int numero, i, binarios, soma = 0;
    
    printf("Informe um número inteiro em base decimal (0 a 32).\n");
    scanf("%d", &numero);
    
    for(i = 1; numero > 0; i++){
        
        //printf("\n%d", numero);
        binarios = numero%2;
        numero = numero/2;
        
        if (binarios == 1){
            
            soma += binarios; 
            
        }
        
    }
    
    printf("Houve %d dígito(s) 1.", soma);
    
    return 0;
    
}

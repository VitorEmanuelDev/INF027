/*Criar um algoritmo que leia dois números inteiros,
e que solicite ao usuário qual a operação deseja realizar
entre esses números. Caso o usuário digitar o caractere “x”
será realizada uma multiplicação, caso seja digitado o caractere
“ / ”' será realizada uma divisão, caso seja digitado o caractere
‘’+’’ será realizado uma adição, e caso seja digitado o caractere
‘’ – ‘’ será realizada uma subtração.*/


#include <stdio.h>

int main()
{
    char operacao;
    int num1, num2, resultado;
    
    printf("Qual operação deseja realizar?\n\n");
    printf("Aperte '+' para adicionar\nAperte '-' para subtrair\nAperte 'x' para multiplicar\nAperte '/' para dividir.\n");
    scanf("%c", &operacao);
    
    printf("Informe dois números inteiros:\n");
    scanf("%d%d", &num1, &num2);
    
    if(operacao == '+'){
        
        resultado = num1 + num2;
        
    } else if(operacao == '-'){
        
        resultado = num1 - num2;
        
    }else if(operacao == '/'){
        
        resultado = num1 / num2;
        
    }else if(operacao == 'x'){
        
        resultado = num1 * num2;
        
    }
    
    printf("%d %c %d = %d", num1, operacao, num2, resultado);
    
    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    
    printf("Dias da semana\n");
    scanf("%d", &num);
    
    //if (num == 1){
    //    printf("domingo");
    //} else if(num == 2){
    //     printf("segunda");
    //}else if(num == 3){
    //     printf("terça");
    //}else if(num == 4){
    //     printf("quarta");
    //}else if(num == 5){
    //     printf("quinta");
    //}else if(num == 6){
    //     printf("sexta");
    //}else if(num == 7){
    //     printf("sábado");
    //} else {
    //    printf("Não estamos em Nárnia.");
    //}

    switch(num){
        case 1 : printf("domingo");
        break;
        
        case 2 : printf("segunda");
        break;
        
        case 3 : printf("terça");
        break;
        
        case 4 : printf("quarta");
        break;
        
        case 5 : printf("quinta");
        break;
        
        case 6 : printf("sexta");
        break;
        
        case 7 : printf("sábado");
        break;
        
        default : printf("Não estamos em Nárnia.");
        
    }
    
    return 0;
}

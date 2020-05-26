/* Determine the Net Pay*/

#include <stdio.h>
#define size 100

int main()
{
    float hourlyRate = 12, tax1 = 0.85, tax2 = 0.8, tax3 = 0.75, pay = 0, netPay = 0, overtime = 0, rest = 0;
    int hours = 0;
    char name[size];
    
    printf("Employee name:\n");
    fgets(name, size, stdin);
    
    printf("How many hours did %s work?\n", name);
    scanf("%d", &hours);
    
    if(hours <= 40 && hours > 0){
        
        pay = hours * hourlyRate;        
        
    } else {
        
        overtime = hours - 40;
        hours = hours - overtime;
        pay = (hours * hourlyRate) + (overtime * (hourlyRate * 1.5));
        
    }
    
    if(pay <= 300){
        
        netPay = pay * tax1;
        
    } else if (pay > 300 && pay <= 450){
        
        rest = pay - 300;
        netPay = 300 * tax1 + rest * tax2; 
    
    } else {
        
        rest = pay - 450;
        netPay = 300 * tax1 + 150 * tax2 + rest * tax3;
        
    }
    
    printf("%s's weekly net pay is: usd %.2f", name, netPay);

    return 0;
}

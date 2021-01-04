#include<stdio.h>
int main(){
    int num1,num2;
    char opp;
    printf("Write the first number  : ");
    scanf("%d",&num1);
    printf("What you want to do  : ");
    scanf("%s",&opp);
    printf("Write the second number  : ");
    scanf("%d",&num2);

    if (opp == '+')
    {
        printf("Answer = %d",num1+num2);
    }
    else if (opp == '-')
    {
        printf("Answer = %d",num1-num2);
    }
    else if (opp = '*')
    {
        printf("Answer = %d",num1*num2);
    }
    else
    {
        printf("Answer = %d",num1/num2);
    }
    
    
    
    
    return 0;
}
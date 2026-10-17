#include<stdio.h>
int main(){
    int a,b;
    char opp;
    printf("\n\nenter first number\n");
    scanf("%d" ,&a);
    printf("enter operator\n");
    scanf(" %c",&opp);
    printf("enter second number\n");
    scanf("%d",&b);
    if(opp=='+')
        printf("Sum is %d",(a+b));
    else if(opp=='-')
        printf("Subtract is %d",(a-b));
    else if(opp=='*')
        printf("multiply is %d",(a*b));
    else if(opp=='/')
        printf("divide is %d",(a/b));
    else
        printf("Invalid input");
    return 0;
    
    

}
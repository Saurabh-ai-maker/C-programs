#include<stdio.h>
int main(){
    int a ;
    printf("enter a age:");
    scanf("%d" , &a);
    if(a>=18)
       printf("you are eligible for voting");
    else
       printf("you are not eligible for voting");
       return 0;

}   
#include<stdio.h>
int main(){
    int n;
    printf("\n\nEnter a number to checkn if it is odd or even:\n");
    scanf("%d",&n);
    if(n%2==0)
        printf("%d is an EVEN number\n",n);
    else
        printf("%d is an ODD number\n",n);
}
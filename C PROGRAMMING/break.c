#include<stdio.h>
int main(){
    for(int i=0;i<15;i++){
        if(i==5){
           // break;//code exit now output-01234
           continue;//skip this iteration 5 output-1 2 3 4 6 7 8 9 10 1  11 12 13 14
        }
            printf("i is %d\n",i);

        
        
    }
}
#include<stdio.h>

int main(){
    
    printf("The odd numbers between 1 and 100 are as follows....\n");
    
    for(int i=1; i<=100; i+=2){
        printf("%d ",i);
    }
    return 0;
}
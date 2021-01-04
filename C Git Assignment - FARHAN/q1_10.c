#include<stdio.h>

int main(){
    int n,count=0;
    
    printf("Enter a number: ");
    scanf("%d",&n);
    int t=n;
    while(n){
        count++;
        n/=10;
       
    }
    printf("The number of digits in %d is %d",t,count);
    return 0;
}
#include<stdio.h>

int main(){
    int sum=0,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i+=2){
        sum+=i;
    }

    printf("The sum of all odd natural no.s between 1 and %d is: %d",n,sum);
    return 0;
}
#include<stdio.h>

int main(){
    int n,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n){
        int d = n%10;
        sum+=d;
        n/=10;

    }
    printf("The sum of the digits of the number is : %d",sum);


    return 0;
}
#include<stdio.h>

int main(){
    int n,prd=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n){
        int d = n%10;
        prd*=d;
        n/=10;

    }
    printf("The product of the digits of the number is : %d",prd);


    return 0;
}
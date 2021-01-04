#include<stdio.h>

void perfect(int n){
    int sum = 0;
    for(int i = 1 ; i < n ; i++)   
        {   
        if(n % i == 0)   
            sum = sum + i ;   
        }    

    if (sum == n)   
        printf("\n %d is a Perfect Number", n);   
    else   
        printf("\n%d is not the Perfect Number", n);   
}


int main(){
    int n;
    printf("Enter a number to check perfect number or not: ");
    scanf("%d",&n);
    perfect(n);
    return 0;
}
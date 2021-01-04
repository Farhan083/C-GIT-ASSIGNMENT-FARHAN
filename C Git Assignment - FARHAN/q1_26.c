#include<stdio.h>

int main(){
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n==1)
    {
        printf("neither prime nor composite");
        return 0;
    }
    
    else
    {
        for(i=2; i<n; i++){
        if(n%i==0){
            printf("It is not a prime number");
            break;
        }
    }
    }
    
    if(i==n)
    printf("It is a prime number");
    return 0;
}
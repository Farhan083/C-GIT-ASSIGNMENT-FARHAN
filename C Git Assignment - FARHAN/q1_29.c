#include<stdio.h>
int prime(int n){
    int i;
    if(n==1)
    return -1;

    else
    {
        for(i=2; i<n; i++){
        if(n%i==0)
            return 0;
        }
    }
    return 1;
    
}


int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    if(prime(n)==1){
        printf("No factors, It is a prime number\n");
    }

    else{
    for(int i=1; i<n; i++){
        if(n%i==0){
            if(prime(i)==1)
            printf("%d, ",i);
        }
    }

    printf("are the prime factors of %d",n);
}
    return 0;
}
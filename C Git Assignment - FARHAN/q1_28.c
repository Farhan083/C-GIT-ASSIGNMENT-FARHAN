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
    int n,f=1,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    for(int i=1; i<=n; i++){
        f = prime(i);
        if (f==1)
        {
            sum+=i;
        }
        
    }

    printf("The sum of all prime numbers between the interval = %d",sum);
       
    return 0;
}
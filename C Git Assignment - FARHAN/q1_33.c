#include<stdio.h>

int perfect(int n){
    int sum = 0;
    for(int i = 1 ; i < n ; i++)   
        {   
        if(n % i == 0)   
            sum = sum + i ;   
        }    

    if (sum == n)   
       return n;   
    else   
        return -1;
}


int main(){
    int n,i,count=0;
    printf("Enter a number to check perfect number or not: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        if (perfect(i)!=-1)
        {
            printf("%d, ",i);
        }
        else
        {
            count++;
        }
        
    }

    if(count==n){
        printf("No perfect number between 1 and %d",n);
    }
    else
    {
        printf("are the perfect numbers between 1 and %d",n);
    }
    
    return 0;
}
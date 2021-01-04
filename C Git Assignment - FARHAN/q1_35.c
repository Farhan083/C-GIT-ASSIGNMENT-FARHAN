#include<stdio.h>

int fact(int n){
    int i;
    unsigned long fact = 1;
    for (i = 1; i <= n; ++i) {
            fact *= i;
        }
    return fact;
}

int strong(int n){
    unsigned long long sum=0;
    int t = n;
    while (t)
    {
        int r = t%10;
        sum+=fact(r);
        t/=10;

    }
    
    if(sum==n){
        return n;
    }
    else
    {
        return -1;
    }
    
       

}
int main(){
    int n,i,sum=0,count=0;
    printf("Enter a number to check it is strong number or not: ");
    scanf("%d",&n);
     for(i=1; i<=n; i++){
        if (strong(i)==i)
        {
            printf("%d, ",i);
        }
        else
        {
            count++;
        }
        
    }

    if(count==n){
        printf("No stong numbers between 1 and %d",n);
    }
    else
    {
        printf("are the strong number between 1 and %d",n);
    }
    
        
    return 0;
}
#include<stdio.h>
int fact(int n){
    if(n==1){
        return 1;
    }
    else
    return n*fact(n-1);
}

int main(){
    int n,sum=0;
    printf("Enter a number to check it is strong number or not: ");
    scanf("%d",&n);
    int t = n;
    while (t)
    {
        int r = t%10;
        sum+=fact(r);
        t/=10;

    }
    if(sum==n){
        printf("The number is strong number");
    }
    else
    {
        printf("The number is not a strong number");
    }
    
        
    return 0;
}
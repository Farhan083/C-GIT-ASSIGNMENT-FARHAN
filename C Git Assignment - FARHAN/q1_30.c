#include<stdio.h>
#include<math.h>

void armstrong(int n){
    int count=0,sum=0,k,d;
    d=n; k=n;
    while(k){
        count++;
        k/=10;

    }
    
    while(n){
        int t = n%10;
        sum += pow(t,count);
        n/=10;
    }
    if(sum==d)
    printf("It is an Armstrong number");
    else 
    printf("It is not an Armstrong number");
}

int main(){
    int n;
    printf("Enter a number to check armstrong or not: ");
    scanf("%d",&n);
    armstrong(n);
    return 0;
}
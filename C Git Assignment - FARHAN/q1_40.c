#include<math.h>
#include<stdio.h>
#include<string.h>

int main(){

    long long n,t; 
    int i=0,dec=0,oct=0;

    printf("Enter a binary number: ");
    scanf("%lld", &n);
    
    t=n;

    while(n){
        int r = n%10;
        dec+= r*pow(2,i);
       
        n/=10;
        i++;
        
    }
    printf("%lld in binary = %d in decimal\n",t,dec);
    return 0;
}
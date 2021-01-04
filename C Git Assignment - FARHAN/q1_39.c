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
   
    i=1;
    while (dec != 0) {
        oct += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }

    printf("%lld in binary = %d in octal\n",t,oct);
    
    return 0;
}

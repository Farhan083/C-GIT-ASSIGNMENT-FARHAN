#include<math.h>
#include<stdio.h>
#include<string.h>

int main(){

    long long bin=0,h;
    int i=0,dec,oct=0,t,n;

    printf("Enter a decimal number: ");
    scanf("%d", &dec);
    
    t=dec;
    n=dec;
    
    i=1;
    
    while (n != 0) {
        int rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
    
    printf("%d in decimal = %lld in binary\n", t, bin);
   
    return 0;
}

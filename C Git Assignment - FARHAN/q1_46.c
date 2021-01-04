#include<math.h>
#include<stdio.h>
#include<string.h>

int main(){

    long long bin=0,h;
    int i=0,dec,index=0,oct=0,t;

    printf("Enter a decimal number: ");
    scanf("%d", &dec);
    
    t=dec;
    
    i=1;

    while (dec != 0) {
        oct += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }

    printf("%d in decimal = %d in octal\n",t,oct);

    return 0;
}

#include<math.h>
#include<stdio.h>
#include<string.h>

int main(){

    long long bin=0;
    int i=0,dec=0,oct,t;

    printf("Enter a octal number: ");
    scanf("%d", &oct);
    
    t=oct;
    

    while (oct != 0) {
        dec += (oct % 10) * pow(8, i);
        ++i;
        oct /= 10;
    }
    i = 1;
    
   // converting decimal to binary
    while (dec != 0) {
        bin += (dec % 2) * i;
        dec /= 2;
        i *= 10;
    }

    printf("%d in oct = %lld in binary\n",t,bin);
    
    return 0;
}

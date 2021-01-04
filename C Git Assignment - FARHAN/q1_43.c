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
    printf("%d in oct = %d in decimal\n",t,dec);

    return 0;
}
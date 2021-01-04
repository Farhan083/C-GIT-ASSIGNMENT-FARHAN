#include <stdio.h>
#include <math.h>
#include <string.h>
#define SIZE  20
int main()
{
    char hex[SIZE];
    long long dec = 0, base = 1,bin =0;
    int i = 0, value, length,oct=0,t;

    /* Get hexadecimal value from user */
    
    printf("Enter hexadecimal number: ");
    fflush(stdin);
    fgets(hex,SIZE,stdin);

    length = strlen(hex);
    
    for(i = length--; i >= 0; i--)
    {
        if(hex[i] >= '0' && hex[i] <= '9')
        {
            dec += (hex[i] - 48) * base;
            base *= 16;
        }
        else if(hex[i] >= 'A' && hex[i] <= 'F')
        {
            dec += (hex[i] - 55) * base;
            base *= 16;
        }
        else if(hex[i] >= 'a' && hex[i] <= 'f')
        {
            dec += (hex[i] - 87) * base;
            base *= 16;
        }
    }

//------------------------------------
    i=1;

    while (dec != 0) {
        oct += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }

    printf("Hexadecimal %s = %d in octal\n",hex,oct);
    
    return 0;
}
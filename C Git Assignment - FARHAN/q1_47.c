#include<math.h>
#include<stdio.h>
#include<string.h>

int main(){

    int hexConstant[] = {0, 1, 10, 11, 100, 101, 110, 111, 1000, 
                         1001, 1010, 1011, 1100, 1101, 1110, 1111};

    
    long long bin=0,h;
    int i=0,dec,index=0,oct=0,t,n;
    char hex[20];

    printf("Enter a decimal number: ");
    scanf("%d", &dec);
    
    t=dec;
    n=dec;
    
    i=1;

    while (dec != 0) {
        oct += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }

    
    i=1;
    
    while (n != 0) {
        int rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
    
// // ---------------------------------------------

    h = bin;

     while(h){
        int r = h%10000;
        for(i=0; i<16; i++)
        {
            if(hexConstant[i] == r)
            {
                if(i<10)
                {
                    
                    hex[index] = (char)(i + 48);
                }
                else
                {
                    
                    hex[index] = (char)((i-10) + 65);
                }

                index++;
                break;
            }
        }
        
        h/=10000;
    }

    hex[index] = '\0';
    int p = strlen(hex); 
    //reverse of the string array
    for (int i = 0; i <p / 2; i++){
        char c = hex[i];
        hex[i] = hex[p-i-1];
        hex[p-i-1] = c;
    }

    printf("%d in decimal = %s in Hexadecimal \n",t,hex);
    
    
    return 0;
}

#include<math.h>
#include<stdio.h>
#include<string.h>

int main(){

    int hexConstant[] = {0, 1, 10, 11, 100, 101, 110, 111, 1000, 
                         1001, 1010, 1011, 1100, 1101, 1110, 1111};

    
    long long bin=0,h;
    int i=0,dec=0,index=0,oct,t;
    char hex[20];

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

   
    h=bin;
  
// ---------------------------------------------


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

    printf("%d in oct = %s in Hexadecimal \n",t,hex);
    
    
    return 0;
}

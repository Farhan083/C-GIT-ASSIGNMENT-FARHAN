#include <stdio.h>

#define SIZE 8

int main()
{
    char binary[SIZE + 1], onesComp[SIZE + 1], twosComp[SIZE + 1];
    int i, carry=1;

    printf("Enter binary value: ");
    
    /* Input 8-bit binary string */
    gets(binary);

    /* Find ones complement of the binary number */
    
    for(i=0; i<SIZE; i++)
    {
        if(binary[i] == '1')
        {
            onesComp[i] = '0';
        }
        else if(binary[i] == '0')
        {
            onesComp[i] = '1';
        }
    }
    onesComp[SIZE] = '\0';

    printf("Original binary = %s\n", binary);
    printf("Ones complement = %s\n", onesComp);

    return 0;
}
#include<stdio.h>

int main(){
    int n1,n2,i=1,hcf;
    printf("Enter number 1 and number 2: ");
    scanf("%d %d",&n1,&n2);
    
    do
    {
        if(n1%i==0 && n2%i==0)
        hcf = i;
        i++;
    } while (i<=n1 && i<=n2);

    printf("The hcf of the numbers %d and %d is %d\n",n1,n2,hcf);
   
    return 0;
}
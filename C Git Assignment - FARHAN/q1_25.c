#include<stdio.h>

int main(){
    int n1,n2,i=1,lcm=0;
    printf("Enter number 1 and number 2: ");
    scanf("%d %d",&n1,&n2);

    while (lcm==0)
    {
        if(i%n1==0 && i%n2==0)
            lcm = i;
        i++;
    }

    printf("The LCM of the number %d and %d is %d",n1,n2,lcm);
    
    return 0;
}
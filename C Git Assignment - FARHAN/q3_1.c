#include<stdio.h>

int main(){
    int n1,n2;
    printf("Enter number 1 and number 2 respectively: ");
    scanf("%d %d",&n1,&n2);

    if(n1>n2){
        printf("%d is greater than %d",n1,n2);
    }
    else
    {
       printf("%d is greater than %d",n2,n1);
    }
    
    return 0;
}
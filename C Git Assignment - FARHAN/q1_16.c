#include<stdio.h>

int main(){
    int n, rev=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    while(n){
        int d = n%10;
        rev=rev*10+d;
        n/=10;
    }
    printf("The reverse of the entered number is: %d",rev);

    return 0;
}
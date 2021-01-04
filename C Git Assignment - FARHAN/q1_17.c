#include<stdio.h>

int main(){
    int n, rev=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    int t = n;
    while(n){
        int d = n%10;
        rev=rev*10+d;
        n/=10;
    }
    if(rev==t){
        printf("It's a palindrome\n");
    }
    else
    {
        printf("It's not a palindrome");
    }
    
    return 0;
}
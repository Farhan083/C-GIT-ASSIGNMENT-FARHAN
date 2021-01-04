#include<stdio.h>

int main(){
    int n,count=0;
    
    printf("Enter a number: ");
    scanf("%d",&n);
    int first=n;
    int last=n%10;
    while(first>=10){
        first/=10;
       
    }
    int sum = first + last;
    printf("The sum of first digit and the last digit of the number %d is: %d",n,sum);
    return 0;
}
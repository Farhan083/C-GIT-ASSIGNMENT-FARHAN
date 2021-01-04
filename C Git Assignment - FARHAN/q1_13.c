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
    
    printf("The first digit and the last digit of the number %d are: %d and %d",n,first,last);
    return 0;
}
#include<stdio.h>

int main(){
    int n;
    printf("Enter month number (1-12): ");
    scanf("%d",&n);
    
    if(n>12 || n<1){
        printf("INVALID CHOICE..");
        return 0;
    }
    if(n%2==0 && n!=2 && n!=8){
        printf("30 days in the month");
    }
    else if(n%2!=0 && n!=2 && n!=8){
        printf("31 days in the month");
    }
    else if(n==2){
        printf("28 days in the month, 29 if leap year");
    }
    else
    {
        printf("31 days in the month");
    }
    
    
    return 0;
}
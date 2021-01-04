#include<stdio.h>

int main(){
    int n,a[10],freq[10],count=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(int i =1; i<=10; i++){
        a[i-1]=i;
    }
    for(int i =1; i<=10; i++){
        freq[i-1]=0;
    }

    while (n)
    {
        int r = n % 10;
        for(int i=0; i<10; i++){
            if(a[i]==r){
                freq[i]+=1;
            }

        }
        n/=10;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("The frequency of %d in the number is %d\n",i+1,freq[i]);
    }
    
    return 0;
}
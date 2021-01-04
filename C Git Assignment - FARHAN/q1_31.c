#include<stdio.h>
#include<math.h>

int armstrong(int n){
    int count=0,sum=0,k,d;
    d=n; k=n;
    while(k){
        count++;
        k/=10;

    }
    
    while(n){
        int t = n%10;
        sum += pow(t,count);
        n/=10;
    }
    if(sum==d)
    return d;
    else 
    return -1;
}

int main(){
    int end,result,count=0;
    printf("Enter a number n to check armstrong numbers between 1 and n\n");
    scanf("%d",&end);
    for(int i = 1; i<=end; i++){
        result = armstrong(i);
        if(result==-1){
            // count++;
            continue;
        }
        else
        {
            printf("%d is an armstrong number\n",result);
        }
        
    }

    // optional condition
    // because for 1 to n it will never be encountered

    // if(count==end){
    //     printf("No armstrong numbers between 1 and %d\n",end);
    // }
    return 0;
}
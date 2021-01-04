#include<stdio.h>

int main(){
    int n,choice,i,nextTerm,t1=0,t2=1;
    printf("Enter a number: ");
    scanf("%d",&n);

    for (i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}
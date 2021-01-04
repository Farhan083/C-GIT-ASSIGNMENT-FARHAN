#include<stdio.h>

int main(){
    int n;
    printf("ENTER A NO. TO PRINT COUNTING TILL THEN\n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        printf("\n%d",i);
    }
    return 0;
}
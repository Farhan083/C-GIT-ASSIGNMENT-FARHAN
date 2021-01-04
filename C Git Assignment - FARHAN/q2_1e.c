#include<stdio.h>
int main()
{       
    int i,j,k,space=0;
   printf("Enter no of rows: ");
   scanf("%d",&k); 
 
   for(i=1;i<=k;i++){
       for(space=1;space<=k-i;space++){
           printf(" ");
       }
       for(j=1;j<=i;j++){
           printf("* ");
       }
       

       printf("\n");
   }
    

    for(i=k-1;i>=1;i--){
       for(space=1;space<=k-i;space++){
           printf(" ");
       }
       for(j=1;j<=i;j++){
           printf("* ");
       }
       

       printf("\n");
   }
    

    return 0; 
}
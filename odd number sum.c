#include<stdio.h>
#include<conio.h>
int main(){
int i,n,sum=0;
printf(" \n Enter  the n terms ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    printf("\n the number %d",2*i-1);
 sum += 2*i-1 ;
 }
 printf("\n the sum of odd is %d",sum);
 return 0;
 }

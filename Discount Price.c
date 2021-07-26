#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,d;
printf("\nEnter The Quantity of musk ");
scanf("%d",&a);
printf("\nEnter The rate per musk ");
scanf("%d",&b);
c = a*b ;
d = c- c*10/100 ;
printf("\nThe Amount payble = %d ",c);
if(a>=1000)
{
    printf("\nYou are eligible for discount ");
    printf("\nNow you pay = %d ",d);
}
return 0;
 }

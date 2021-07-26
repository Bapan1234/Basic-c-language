#include<stdio.h>
#include<conio.h>
int main(){
int a,b;
printf("Enter the first number :\n");
scanf("%d",&a);
printf("\nEnter the 2nd number :\n");
scanf("%d",&b);
a =a+b;
b = a-b;
a =a-b;
printf("\nAfter swaping two numbers :\n a= %d \n b=%d",a,b);
return 0 ;
}

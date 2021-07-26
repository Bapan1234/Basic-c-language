#include<stdio.h>
#include<conio.h>
int main(){
int a,reverse=0,temp;

 printf("\n Enter the number ");
 scanf("%d",&a);
  temp =a;
 while(temp>0){
  int lastDigit = temp%10;
  reverse = reverse*10 + lastDigit;
  temp /=10;
  }
 printf("\n The reverse number is %d",reverse);



  if(reverse==a)
  printf("\n The number is Pallindrome");
  else
  printf("\n The number is not a pallindrome");
  return 0;
}

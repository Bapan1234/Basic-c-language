//code by BAPAN MANDAL
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
int a,rem,sum=0,temp,n;
printf("Enter the number : \n");
scanf("%d",&a);
temp =a;
while(temp>0){
    temp/=10;
    n++;
}
printf("%d",n);
temp =a;
while(temp>0){
rem = temp%10;
sum +=pow(rem,n);
temp/=10;

}
printf("\n The sum is %d",sum);
if(sum==a)
printf("\n The number is a armstrong number");
else
printf("\n The number is not a armstrong number.");
return 0;

//Code by BAPAN MANDAL
}

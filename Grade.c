#include<stdio.h>
#include<conio.h>
int main(){
int a;
printf("\n Enter the number of candidate :-");
scanf("%d",&a);
if(a>=90&&a<100)
printf("\n The grade of student is Grade o");
else if (a>=80&&a<90)
printf("\n The grade of student is Grade E");
else if(a>=70&&a<80)
printf("\n The grade of student is Grade A");
else if(a>=60&&a<70)
printf("\n The grade of student is Grade B");
else if(a>=50&&a<60)
printf("\n The grade of student is Grade C");
else if(a>=40&&a<50)
printf("\n The grade of student is Grade D");
else if(a>0&&a<40)
printf("\n The grade of student is Grade F");


return 0;
}

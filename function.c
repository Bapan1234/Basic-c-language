#include<stdio.h>
#include<conio.h>
int main(){
int x =100;
printf("\n before call x= %d",x);
change(x);
printf("after x= %d",x);
return 0;
}
void change(int num){
printf("before adding num %d \n",num);
num+=100;
printf("after adding %d \n",num);

}

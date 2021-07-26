#include<stdio.h>

int main(){
    int age;
char vipPass;

    printf("Enter your age\n");
    scanf("%d", &age);
printf("Do you have vipPass Y or N\n",vipPass);
scanf("%u",&vipPass);
    if ((age <= 70 && age>=18) && (vipPass=='y'))
    {
        printf("You can drive\n");
    }
    else
    {
        printf("You cannot drive\n");
    }

    return 0;
}

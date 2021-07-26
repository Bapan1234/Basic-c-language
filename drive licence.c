#include<stdio.h>
#include<conio.h>
int main(){
    int age;
    int vipPass;


    printf("Enter your age\n");
    scanf("%d", &age);

    // if (age <= 70 && age>=18)
    if (age<=70&&age>=18) {
        printf("\nHave you any lisence :-\n//Please press '1' for yes and '0' for no .\n");
        scanf("%d",&vipPass);
        printf("Thanking you, You have press %d",vipPass);
        if(vipPass==1)
        {
        printf(" \nYou have both licence and age critaria.\nSo, you can drive .");
        }
        else if(vipPass==0)
        {
        printf("\nSorry, you have age critaria but don't have any licence. So you can't drive .");
        }else{
        printf("\nPlease , type in licence critraria between 1 for yes or 0 for no.");
        }
        }
        else
        {

        printf("You cannot drive\n");
        }

    return 0;
}

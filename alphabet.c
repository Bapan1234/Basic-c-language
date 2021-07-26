#include<stdio.h>
#include<conio.h>
int main(){
int a,i,j,k,l;
char c[]={'A','B','C','D','E','F','G','H','I','J','K'};
printf("Enter a number :\n");
scanf("%d",&a);
for(i =1;i<=a;i++){

    for(j=0;j<=a-i;j++){
    printf("  ");
    }
    for(k=0;k<i;k++){
    printf("%c ",c[k]);
    }
    if(i>1) {
    for ( l=k-2;l>=0;l--) {
    printf("%c ",c[l]);
    }
    }

    printf(" \n");
    }
    return 0;
    }

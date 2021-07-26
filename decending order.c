#include<stdio.h>
#include<conio.h>
int main(){
int n,i,j,temp;
printf("Enter the length of arrey: \n");
scanf("%d",&n);
int a[n];
printf("\nEnter the arrey:- \n");
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
for ( i =0;i<n;i++) {

    	 for ( j=0;j<n-i;j++) {
    		 if(a[j+1]<a[j]) {
    			  temp =a[j+1];
    			 a[j+1] =a[j];
    			 a[j] = temp;
    		 }

    	 }

}
for(int k =0;k<n;k++)
   printf("\n%d   ",a[k]);

return 0;
}

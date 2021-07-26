#include<stdio.h>
 void main()
 {
       char gendercode, maritalstatus;
       int age;

       printf("Enter Age,Gendercode,Maritalstatus : ");
       scanf("%d%c%s",&age,&gendercode,&maritalstatus);
       if(maritalstatus=='m')
              printf("Driver is Insured");
       else
        {
            if(gendercode=='m')
               {
                  if(age>30)
                     printf("driver is insured");
                 else
                     printf("driver is not insured");
               }
             else
              {
                    if(age>25)
                       printf("driver is insured");
                    else
                       printf("driver is not insured");
               }
        }
                       getch();
 }

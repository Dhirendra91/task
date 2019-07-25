#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
  {
    int i,j;
    float salary,bonus;
    char gender;

     printf("Enter m for Male & f for Female \n ");
     scanf("%c",&gender);

       printf("Enter Salary \n ");
        scanf("%f",&salary);

         if(gender=='M' && gender=='m')
          {
           if(salary>10000)
            bonus=(salary*0.05);
            else
                bonus=(salary*0.07);
            }

             if(gender=='F' && gender=='f')
               {
                  if(salary>10000)
                     bonus=(salary*0.1);
                  else
                  bonus=(salary*0.12);
               }
                salary+=bonus;
                 printf("Bonus=%.2f\nSalary=%.2f\nu",bonus,salary);
      }

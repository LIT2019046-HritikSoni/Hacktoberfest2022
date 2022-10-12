#include<iostream>


int main()
{
   int i,j;
   for(i=0;i<24;i++)
   {
       for(j=0;j<80;j++)
       {
           if(i==0)
           {
               printf("*");
           }
           else if(i>0 && i<23)
           {
               if(j==0)
               {
                   printf("*");
               }
               else if(j==79)
               {
                   printf("*");
               }
               else
               {
                   printf(" ");
               }

           }
           else
           {
               printf("*");
           }
       }
       printf("\n");
   }


    return 0;
}

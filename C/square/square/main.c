#include <stdio.h>
int main()
{
    int x,y;
   /* for (x=0; x<3; x++)
    {
        for (y=0; y<3; y++)
        {
            printf("* ");
        }
        printf("\n");
    }*/
    
  /*  for (x=0; x<3; x++)
     {
         for (y=0; y<=x; y++)
         {
             printf("* ");
         }
         printf("\n");
     } */
    
    for (x=0; x<3; x++)
     {
         if (x>3)
         {
             printf(" ");
         }
         else {
             printf("* ");
         }
         printf("\n");
     }
    
}

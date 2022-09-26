/*#include <stdio.h>
int main()
{
    int a=30,b=700,c=60;
    
    if(a<b)
    {
        if (a>c)
        {
            printf("%d\n",a);
        }
        if (b<a)
        {
           if (b>c)
           {
               printf("%d\n",b);
           }
        }
    }
    else
    {
        printf("%d\n",c);
    }
   
    return 0;
} */

#include <stdio.h>
int main()
{
    float a,b,c;
    
    printf("Enter any value:");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    
    if (a>b)
    {
        printf("%f",a);
    }
    else if (b>c)
    {
        printf("%f",b);
        
    }
    else
    {
        printf("%f",c);
    }
}

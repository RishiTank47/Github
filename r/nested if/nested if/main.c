#include <stdio.h>
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
}

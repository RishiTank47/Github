#include <stdio.h>
int main()
{
    // jumping
    
    int a;
    for (a=1; a<=10; a++)
    {
       /* if (a<=5)
        {
            break;
        }
        printf("%d\n",a); */
        
        // continue
        
        if (a==1 || a==5 || a==6)
        {
            continue;
        }
        printf("%d\n",a);
    }
}

#include <stdio.h>
int main()
{
    int x;
    for (x=0; x<=10; x++)
    {
        printf("120 X %d= %d\n",x,120*x);
    }
    
   //while
    
    x=0;
    while (x<100)
    {
        printf("  %d\n",x);
        x++;
    }
    
    //do
    
    
    x=10;
    do {
        printf("%d\n",x);
        x++;
        
    } while (x<50);
    
}

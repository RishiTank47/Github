#include <stdio.h>
int main()
{
    int x,y;
    
    /*for (x=0,y=0;x<10,y<10;x++,y--)
    {
        printf("%d %d\n",x,y);
    } */
    
    //while
    
    x=1;
    while (x<10)
    {
        printf("%d\n",x);
        x++;
    }
    
    //do
    x=40;
    do
    {
        printf("Hello\n");
        x++;
    } while (x<10);
}

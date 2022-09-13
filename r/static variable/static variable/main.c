#include <stdio.h>
int a=30;
int getV()
{
    int x;
    x=12;
    static int y=23;
    
    printf("%d %d\n %d\n",x,y,a);
    
    x++;
    y++;
    
    return 0;
}

int main()
{
    getV();
    getV();
    getV();
    getV();
    getV();
    getV();
}


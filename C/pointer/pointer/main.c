#include <stdio.h>
int main()
{
    int a=342,*p,**q;
    p=&a;
    q=&p;
    
    printf("%d\n",a);
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",q);
    printf("%d\n",*q);
    printf("%d\n",**q);
}

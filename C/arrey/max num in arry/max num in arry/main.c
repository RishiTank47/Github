#include <stdio.h>
int main()
{
    int a[]= {0,5,2684,456,2230,3000,40,4};
    
    int size=0,b,max;
    
    max=a[0];
    
    size= sizeof(a)/ sizeof(a[0]);
    
    for (b=0; b<=size; b++)
    {
        if (max<a[b]) //
        {
            max=a[b];
        }
    }
    printf("%d\n",a[b]);
}

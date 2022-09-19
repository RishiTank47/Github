#include <stdio.h>
int main()
{
  /*  int a[30];
    int b;
    
    for (b=0; b<8; b++)
    {
        scanf("%d",&a[b]);
    }
    for (b=0; b<8; b++)
    {
        printf("%d",a[b]);
    } */
    
    
    int a[]= {1,2,3,4,5,6,7,8,9,10,20,30,10,10};
    int b,sum=0,size;
    size=sizeof(a)/sizeof(a[0]);
    for (b=0; b<size; b++) // 0; 0<a[0]
    {
        sum=sum+a[b];
    }
    printf("%d\n",sum);
    
}

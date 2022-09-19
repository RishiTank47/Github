#include <stdio.h>
int main()
{
    int a[5],i,j,b; // 1,3,6,4,8
    
    
    
    printf("Enter your elements:");
    
    for (i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Your elements is:");
    
    for (i=0; i<5; i++)
    {
        printf("%d\n",a[i]);
    }
    
    printf("Your elements in ascending is:");
    
    for (i=0; i<5; i++)
    {
        for (j=i+1; j<5; j++)
        {
            if (a[i]>a[j]) // for descending a[i]<a[j]
            {
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }printf("%d\n",a[i]);
        
    }
    

    
    
    
}

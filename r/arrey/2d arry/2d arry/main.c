#include <stdio.h>
int main()
{
 /*   int a[3][3],i,j;
    printf("Print:");
    
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            scanf("%d\n",&a[i][j]);
        }
    }
    
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%d\n ",a[i][j]);
        }
    }*/
    
    // sum of 2d arry
    
    
    int a[2][2],b[2][2],i,j,sum[i][j];
    
    printf("Enter 'a' arry elements: ");
    
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            scanf("%d",& a[i][j]);
        }
    }
     
    printf("your 'a' arry elements is =");
    
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            printf("%d",a[i][j]);
        }
    }
    
    printf("\nEnter 'b' arry elements:");
    
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Your 'b' arry elements is =");
    
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            printf("%d\n",b[i][j]);
        }
    }
    printf("\nsum of 2d elements:");
    
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            sum [i][j] = a[i][j]+b[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}

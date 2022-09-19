#include <stdio.h>
int main()
{
    int a[2][2],b[2][2];
    int i,j = 0,q,n[2][2];
    printf("Enter your first arry:");
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
           scanf("%d",&a[i][j]);
        }
    }
      
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
           printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    printf("Enter your second arry:");
    
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
           scanf("%d",&b[i][j]);
        }
    }
      
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
           printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    
    
                  
    printf("Multiplication of two arry is:\n");
    
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            n[i][j]=0;
            for (q=0; q<2; q++)
            {
                
                n[i][j]=n[i][j]+a[i][q]*b[q][j];
            }
        }
        
    }
    
    
    
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            printf("%d",n[i][j]);
        }printf("\n");
    }
    
    
    
    
    
      
    
   
    
    //00*00+01*10  00*01+01*11
    //10*00+11*10  10*01+11*11

    
}

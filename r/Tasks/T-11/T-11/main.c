// find sum of all even numbers between 1 to n
#include <stdio.h>
int main()
{
    int a,num,sum=0;
    
    printf("Enter any number:");
    scanf("%d",&num);
    
    printf("Even number is:");
    for (a=0; a<=num; a++)
    {
        if (a%2==0)
        {
           printf("%d\n",a);
            sum=sum+a;
        }
        
        
    }printf("sum of all even number is= %d\n",sum);
    
    
}


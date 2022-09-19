#include <stdio.h>
int main()
{
    /*int choice;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: printf("Hello\n");
            break;
        case 2: printf("Hello 2\n");
            break;
        case 3: printf("hello 3\n");
            break;
            
        default: printf("invalid choice\n");
            
    } */
    
    int choice,a;
    printf("Enter any value:");
    scanf("%d",& a);
    printf("Enter your choce");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1: printf("%d\n",++a);
            break;
        case 2: printf("%d\n",++a);
            break;
        default:printf("No\n");
            
    }
    
    
    
    
    
    
}


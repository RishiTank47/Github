#include <stdio.h>

 void fun (int a,int b)
{
    int test;
    char ch='Y';
     do {
         
    printf("Enter any char:");
    scanf("%d",&test);
     
    switch(test)
    {
        case 1: printf("%d\n",a+b);
          break;
    
       case 2: printf("%d\n",a-b);
          break;
    
      case 3: printf("%d\n",a*b);
          break;
            
        default:printf("Invalid choice.\n");
    }
         printf("Do you want to continue(Y/N):\n");
         
         scanf("\n%c",&ch);
         
     }
     while (ch=='Y');
         
     
    
}
int main()
  
{
   
    fun (22,56);
        
}



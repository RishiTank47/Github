// find number of days in month
#include <stdio.h>
int main()
{
    int a;
    printf("Enter any month:");
    scanf("%d",&a);
    
    switch (a)
    {
        case 1:printf("30\n");
         break;
         case 2:printf("28 or 29\n");
           break;
         case 3:printf("31\n");
           break;
        case 4:printf("30\n");
           break;
         case 5:printf("31\n");
            break;
        case 6:printf("30\n");
           break;
      case 7:printf("31\n");
          break;
       case 8:printf("31\n");
          break;
      case 9:printf("30\n");
         break;
        case 10:printf("31\n");
        break;
        case 11:printf("30\n");
          break;
          case 12:printf("31\n");
          break;
    }
    
    
    
    
}


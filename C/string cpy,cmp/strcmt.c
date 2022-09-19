//compare two strings

#include <stdio.h>
#include <string.h>
int main()
{
    char a[10]="Hii", b[10]="Hello";
    
    strcmp(a,b);
    
    printf("%d",strcmp(a, b));
    
    if (strcmp(a,b)==0)
    {
        printf("Equal");
    }
    else
    {
        printf("not rqual ");
    }
    
    
}

#include <stdio.h>

int rec(int x)
{
    
    if (x>0)
    {
        printf("Hello\n");
        rec(x-1);
    }
    
    return 0;
}

int main()
{
     rec(5);
}

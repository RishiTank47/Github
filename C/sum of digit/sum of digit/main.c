#include <stdio.h>
int main()
{
    int x=456123786, prevRem=0,rem;
    
    while (x!=0)
    {
        rem =x%10;
        
        prevRem=prevRem+rem;
        x=x/10;
    }
    printf("%d\n",prevRem);
    
    return 0;
}

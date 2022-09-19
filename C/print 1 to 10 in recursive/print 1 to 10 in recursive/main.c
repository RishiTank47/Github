#include <stdio.h>


/*void repeatFun(int x)
{
    if(x<=10)
    {
        printf("%d\n",x);
        repeatFun(x+1);
    }
    
}

int main()
{
    
    
    repeatFun(0);
    
} */



//

void recu(int x)
{
    int a,b=0,c=0;
    for (a=0; a<=10;a++)
    {
        
        printf("%d",a+b);
        
        a=b;
        
        
        
       
    }
    
    
}

int main()
{
    
    recu(0);
}


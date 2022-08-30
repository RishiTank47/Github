//input electricity unit char & claclulate total ele bill
#include <stdio.h>
int main()
{
    float a,b;
    printf("Enter your unit:");
    scanf("%f",&a);
    
    if (a<50)
    {
        b= a*0.50;
    }
    if (a<150)
    {
        b= a*0.75;
    }
    if (a<250)
    {
        b= a*1.20;
    }
    if (a>250)
    {
        b= a*1.50;
    }
    printf("Your electricity bill is=%.2f\n",a+b);
    
    
}


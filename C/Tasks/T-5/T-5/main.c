//Check whether a character is alphabet,digit or special.

#include <stdio.h>
int main()
{
    char Character;
    printf("Enter any Character:");
    scanf("%c",&Character);
    
    if ((Character>='a' && Character<='z') || (Character>='A' && Character<='Z'))
    {
        printf("this is alphabet\n");
    }
    else if (Character>='0' || Character<='9')
    {
        printf("This is digit\n");
    }
    else
    {
        printf("This is Special\n");
        
    }
}


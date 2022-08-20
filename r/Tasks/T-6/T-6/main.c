//Check whether a character is uppercase or lowercase
#include <stdio.h>
int main()
{
    char word;
    printf("Enter any character:");
    scanf("%c",&word);
    
    if (word>='a')
    {
        printf("This is lowercase\n");
    }
    else if (word>='A')
    {
        printf("This is Uppercase\n");
        
    }
}


// check alphabets using conditional operator.
#include <stdio.h>
int main()
{
    char word;
    printf("Enter any word:-");
    scanf("%c",&word);
    
    if (word>='a' || word>='A')
    {
        printf("This is alphabet\n");
    }
    else
    {
        printf("This is not alphabet\n");
    }
}


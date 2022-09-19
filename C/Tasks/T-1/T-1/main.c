// read the age of a candidate and determine it is eligible for vote.

#include <stdio.h>
int main()
{
    int age;
    printf("Enter Your age:-");
    scanf("%d",&age);
    
    if (age>=18)
    {
        printf("You are eligible for voting\n");
    }
    else
    {
        printf("You are not eligible for voting\n");
    }
}

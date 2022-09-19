// input basic salary oa an employee
#include <stdio.h>
int main()
{
    
    float basic,HRA,DA;
    
    printf("Enter your Basic salary:");
    scanf("%f",&basic);
    
    if (basic<=10000)
    {
        HRA=basic*0.2;
        DA= basic*0.8;
    }
    else if (basic<=20000)
    {
        HRA=basic*0.25;
        DA=basic*0.9;
    }
    else
    {
        HRA=basic*0.3;
        DA=basic*0.95;
    }
    
    printf("Gross salary is= %.2f\n",basic+HRA+DA);
}


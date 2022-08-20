//Convert days to years,weeks and days.

#include <stdio.h>
int main()
{
    
    float years,days,week;
    printf("Enter your days:-");
    scanf("%f",&days);
    
    years= days/365;
    
    printf("Year=%.2f\n",years);
    
    week= days/7;
    
    printf("Weeks=%.2f\n",week);
    
}

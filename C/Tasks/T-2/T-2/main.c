//Convert centimeter to meter and km.

#include <stdio.h>
int main()
{
    float cm;
    printf("Enter your distance in cm:-");
    scanf("%f",&cm);
    
    printf("your distance in meter is= %f\n",cm/100);
    
    printf("your distance in km is= %f\n",cm/100000);
    
}

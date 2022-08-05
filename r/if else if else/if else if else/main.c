#include <stdio.h>
int main()
{
   /* int a;
    printf("enter any number:-");
    scanf("%d",&a);
    if (a>0)
    {
        printf("this is +ve number\n");
    }
    else if(a==0)
    {
        printf("this is zero\n");
    }
    else
    {
        printf("this is -ve number\n");
    }*/
    
    int phy,math,chem;
    
    float percentage,total;
    
    printf("Enter your grade:");
    
    scanf("%d%d%d",&phy,&math,&chem);
    
    printf("phy=%d\nmath=%d\nchem=%d\n",phy,math,chem);
    
    total= phy+math+chem;
    
    percentage=total/3;
    
    printf("%f\n",percentage);
    
    if(percentage>90)
    {
        printf("you are a hero\n");
    }
    
    else if(percentage>80)
    {
        printf("you are a hero's friend\n");
    }
    else if (percentage>70)
    {
        printf("you are a side character\n");
    }
    else if (percentage>60)
    {
        printf("you are a spotboy\n");
    }
    else if (percentage>50)
    {
        printf("you are a tea men\n");
    }
    else
    {
        printf("you are a loser\n");
    }
    
    
        }


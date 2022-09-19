#include <stdio.h>
struct rishi
{
    int a;
    char b;
    float c;
    
};

int main()
{
    printf("write int,charctor and flaot:");
    
    struct rishi r;
    scanf("%c",&r.b);
    scanf("%d",&r.a);
    
    scanf("%f",&r.c);
    
    printf("\n%d\n",r.a);
    printf("%c\n",r.b);
    printf("%f\n",r.c);
}

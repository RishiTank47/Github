#include <stdio.h>
struct rishi
{
    
    int a;
    char q[10];
    
};

void test(struct rishi)
{
    
    struct rishi r;
    scanf("%s\n",&r.q);
    
    scanf("%d",&r.a);
    
    printf("%d\n",r.a);
    printf("%s",r.q);
    
    
    
}


int main()
{
    struct rishi v;
    test(v);
    
    
    
}

#include <iostream>
using namespace std;

class Rishi
{
public:
    void test()
    {
        int a=13;
        cout<<a<<endl;
    }
    
    void test123(int b)
    {
        int yo;
        yo=b;
        cout<<b<<endl;
    }
    

};

int main()
{
    Rishi r;
    
    r.test();
    r.test123(30);
    
}

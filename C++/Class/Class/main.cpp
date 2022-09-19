#include <iostream>
using namespace std;

class R
{
public:
    int a=439;
    
    void test()
    {
        cout<<"this is function:"<<endl;
        
    }
    
};

int main()
{
    R obj;
    obj.test();
    cout<<obj.a<<endl;
    
}

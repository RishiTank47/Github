#include <iostream>
using namespace std;

class A
{public:
    int x;
       void writevalue()
    {
           cout<<"write any value:"<<endl;
           cin>>x;
       }
    void operator ++()
    {
        ++x;
    }
    
       void getvalue()
    {
           cout<<x<<endl;
       }
};

int main()
{
    
    A obj;
    obj.writevalue();
    ++obj;
    obj.getvalue();
    
    
}

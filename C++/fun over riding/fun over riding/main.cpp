#include <iostream>
using namespace std;

class A
{public:
    void test()
    {
        cout<<"test 1"<<endl;
    }
};

class B : public A
{public:
     void test()
    {
         cout<<"test 2"<<endl;
     }
};


int main()
{
    B obj;
    obj.A::test();
    obj.B::test();
}

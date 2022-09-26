#include <iostream>
using namespace std;

class A
{
protected:
    int P=1919;
public:
            void a()
    {
                cout<<"This is protected:"<<P<<endl;
                
            }
};

class B
{
protected:
    string name="Rishi";
public:
             void b()
    {
                 cout<<"This is also protected:"<<name<<endl;
             }
};

class C: public A,public B
{
public:
    
        void c()
    {
            cout<<"This is not protected:"<<endl;
            
        }
};

int main()
{
    C obj;
    obj.a();
    obj.b();
    
}

#include <iostream>
using namespace std;

class A
{
public:
    int money ;
          void setfun(int a)
    {
              money=a;
             
          }
    
    A operator + (A a)
    {
        a.money= money + a.money;
    }
    
    
         void getfun()
    {
             cout<<money<<endl;
         }
};
  

int main()
{
    A obj,obj1,obj2;
    obj.setfun(200);
    obj1.setfun(200);
    obj2= obj+obj1;
    
    obj2.getfun();
    
    
}

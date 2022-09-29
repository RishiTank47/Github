/*#include <iostream>
using namespace std;
class A
{
public:
    
      A()
    {
          cout<<"How are you?"<<endl;
      }
};

int main()
{
    A obj;
} */


// copy constructor

#include <iostream>
using namespace std;

class B
{
    int someint;
    
public:
       B(int S)
    {
           someint=S;
           cout<<someint<<endl;
           
       }
    
    B(B &obj123)
    {
        
        cout<<obj123.someint<<endl;
    }
    
};

int main()
{
    B x(123);
    B y(x);
    
    
    
}

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
       B()
    {
           cout<<"Write sonmethig:";
           cin>>someint;
       }
    
    B(B &obj123)
    {
        
        cout<<obj123.someint<<endl;
    }
    
};

int main()
{
    B obj;
   
}

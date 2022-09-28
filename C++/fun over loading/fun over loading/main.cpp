#include <iostream>
using namespace std;

class  Rishi
{public:
      void get1()
    {
          cout<<"out"<<endl;
    }
    
    void get2(int a)
    {
        cout<<a<<endl;
    }
    
    void get3(string b)
    {
        cout<<b<<endl;
    }
    void get4(int c)
    {
        cout<<c<<endl;
    }
    
};


int main()
{
    Rishi r;
    r.get2(29);
    r.get3("Rishi");
    r.get1();
    r.get4(7575);
    
    
}

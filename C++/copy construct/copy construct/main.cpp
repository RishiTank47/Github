#include <iostream>
using namespace std;

class Rishi
{
  
    int money;
    
public:
    
   Rishi(int m)
    {
          money=m;
         cout<<money<<endl;
      }
    
    Rishi(Rishi &obj123)
    {
        cout<<obj123.money<<endl;
    }
    
    
    
    
};

int main()
{
    Rishi x(220);
    Rishi y(x);
    
}

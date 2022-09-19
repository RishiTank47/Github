#include <iostream>
using namespace std;

class bank
{
  
    int atmpin=9393;
    float acc_balance=29308480309.23;
    
public:
    
    string bank_name="SBI";
    string IFSC="SB2412R";
    int  acc_no[11]={12345678910};
    
};

int main()
{
    bank obj;
    
    cout<<obj.acc_no<<endl;
}

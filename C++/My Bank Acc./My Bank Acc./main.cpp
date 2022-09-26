#include <iostream>
using namespace std;

class Bank
{
protected:
    
    int atmpin;
    float balance;
    int acc_no;
public:
    
    string bank_name="SBI";
    string IFSC="SBT921H";

};

class Rishi : public Bank
{
public:
               void Getinfo_Rishi()
    {
                   cout<<"Enter ATMPIN:"<<endl;
                   cin>>atmpin;
                   cout<<"Your ATMPIN is="<<atmpin<<endl;
                   cout<<"bank_name=SBI"<<endl;
                   cout<<"IFSC=SBT921H"<<endl;
    }
};

int main()
{
    Rishi obj;
    obj.Getinfo_Rishi();
}



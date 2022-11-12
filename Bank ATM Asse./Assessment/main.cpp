#include <iostream>
using namespace std;

class Bank
{
public:
    
    void info()
    {
        cout<<"The name of account holders are :Rakesh Kharva\n"
            "The account holders'addess is: Mumbai\n"
            "The Branch location is: Andheri\n"
            "Account number:5678\n"<<endl;
        
        cout<<"Present avilable balance: Rs.20000\n"<<endl;
    }
    
};
int main()
{
    time_t t;
    time(&t);
    Bank b;
    
    cout<<"          WELCOME TO ATM\n"<<endl;
    cout<<"    ----------------------------------\n"<<endl;
    cout<<"      Current date : "<<ctime(&t)<<endl;
    cout<<"    -----------------------------------\n"<<endl;
    
    
    cout<<"Press 1 and Press Enter to Access your account via Pin Number\n"<<endl;
    cout<<"                        or\n"<<endl;
    cout<<"Press 0 and Press Enter to Help\n"<<endl;
    
    
    int a;
    cin>>a;
    
    if (a==1)
    {
        cout<<"      ATM ACCOUNT ACCESS   \n"<<endl;
        cout<<"Enter your acc Pin access number!"
        "[Only one attempt is allowed]\n"<<endl;
        
        
        
        cin>>a;
        
        if (a==12345)
        {
            cout<<"      ATM Main Menu Screen\n"<<endl;
            
            cout <<"Enter [1] To Deposit cash"<<endl
                 <<"Enter [2] To Withdraw cash"<<endl
                 <<"Enter [3] To Balance Inquiry "<<endl
                 <<"Enter [4] To Exit ATM"<<endl;
            
            
                 
            cout<<"\n\nPLEASE ENTER A SELECTION AND PRESS RETURN KEY:\n"<<endl;
            
            int choice;
            
            cin>>choice;
            
            switch (choice)
            {
                case 1:
                    
                    b.info();
                    
                    cout<<"Enter amount:"<<endl;
                    
                    int amount;
                    
                    cin>>amount;
                    
                    cout<<"your new availale balance amount is Rs."<<20000+amount<<endl<<endl;
                    
                    cout<<"   Thank You "<<endl;
                    
                    break;
                    
                case 2:
                    
                    cout << "Enter amout to withdraw :"<<endl;
                    
                    int withdraw;
                    cin >> withdraw;
                    
                    if (withdraw>20000)
                    {
                        cout<<"Sorry you have insufficient balance\n"<<endl;
                    }
                    else
                    {
                        cout<<"After withdrawl your blance is"<<20000-withdraw<<endl<<endl;
                    }
                    
                    break;
                    
                case 3:
                    
                    b.info();
                    break;
                    
                case 4:
                    cout<<"      Thank You\n"<<endl;
                    break;
            }
        }
        
        else
        {
            cout<<"    Thank You\n"<<endl;
            cout<<" You had made your attempt which failed !! "
            " No more attempts allowed!"
            "sorry \n"<<endl;
        }
        
    }
    else if (a==0)
    {
        cout<<"you must have correct pin number to access this acount.See your"
        "bank representative for assistance during bank opening hours Thanks for,"
        "your choice today!!\n"<<endl;
    }
}


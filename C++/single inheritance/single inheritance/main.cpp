//
//  main.cpp
//  single inheritance
//
//  Created by RISHI TANK on 20/09/22.
//

 #include <iostream>
using namespace std;

class Father
{
protected:
    int Password=1234;
    
};

class Son : public Father
{
public:
    
       void GetP()
    {
           cout<<"My Father's Password is:"<<Password<<endl;
       }
};

int main()
{
    Son obj;
    obj.GetP();
}

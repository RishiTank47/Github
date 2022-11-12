#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file1;
    file1.open("Rishi.txt",ios::app);
    
    
    string data;
    cout<<"Enter data :"<<endl;
    cin>>data;

    file1<<data;
    
    file1.close();
         
    
    ifstream file2; 
    file2.open("Rishi.txt",ios::in);
    
    file2>>data;
    cout<<data<<endl;
}

#include <iostream>
using namespace std;

template<class A>

A test (A x,A y)
{
    cout<<x+y<<endl;
    
    return 0;
}

int main()
{
    cout<<test(23, 43);
    cout<<test(26, 34);
    cout<<test(2, 3);
    cout<<test('s', 'w');
}

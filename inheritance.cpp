#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout<<"Constructor A called"<<endl;
    }
};

class B: public A
{
public:
    B(): A()
    {
        cout<<"Constructor B called";
    }
};

int main()
{
    B obj;
}

#include <iostream>
using namespace std;

class Complex
{
    public:
    int real;
    int imaginary;

    Complex(int r=0, int i=0)
    {
        real = r;
        imaginary = i;
    }

    Complex operator +(Complex c)
    {
        Complex temp;
        temp.real = real+c.real;
        temp.imaginary = imaginary+c.imaginary;
        return temp;
    }

    Complex operator *(Complex c)
    {
        Complex temp;
        temp.real = real*c.real-imaginary*c.imaginary;
        temp.imaginary = imaginary*c.real+c.imaginary*real;
        return temp;
    }


};

int main()
{
    Complex c1(2,3);
    Complex c2(5,4);
    Complex c3;
    c3 = c1 + c2;
    cout<<c3.real<<"+i"<<c3.imaginary;
    Complex c4;
    c4 = c1 * c2;
    cout<<c4.real<<"+i"<<c4.imaginary;
    return 0;
}
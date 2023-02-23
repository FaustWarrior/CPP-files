#include <iostream>
using namespace std;


class Complex
{
    public:
    float real;
    float imaginary;

    Complex(float real1, float imaginary1)
    {
        real=real1;
        imaginary=imaginary1;
    }

    Complex operator + (Complex c)
    {
        Complex temp;
        temp.real = c1.real+c2.real;
        temp.imaginary = c1.imaginary+c2.imaginary;
        return temp;
    }

    Complex operator * (Complex c)
    {
        Complex temp;
        temp.real = c1.real*c2.real-c1.imaginary*c2.imaginary;
        temp.imaginary = c1.imaginary*c2.real+c2.imaginary*c1.real;
        return temp;
    }

};

int main()
{
    Complex c1,c2,c3,c4;
    cout<<"Enter the 1st number"<<endl;
    cout<<"Enter the real part:"<<endl;
    cin>>c1.real;
    cout<<"Enter the imaginary part"<<endl;
    cin>>c1.imaginary;

    cout<<"Enter the 2nd number"<<endl;
    cout<<"Enter the real part"<<endl;
    cin>>c2.real;
    cout<<"Enter the imaginary part"<<endl;
    cin>>c2.imaginary;

    cout<<"The first number is :"<< endl;
    cout<<c1.real<<"+i"<<c1.imaginary;
    cout<<"The second number is :"<<endl;
    cout<<c2.real<<"+i"<<c2.imaginary;
    cout<<"The addition is :"<<endl;
    c3 = c1+c2;
    cout<<"The multiplication is:"<<endl;
    c4 = c1*c2;
}

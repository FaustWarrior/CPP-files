#include <iostream>
using namespace std;

template <class Mytype>
Mytype getmax(Mytype a , Mytype b)
{
    return(a>b?a:b);
}

int main()
{
    int x,y;
    cin>>x;
    cin>>y;
    getmax <int>(x,y);
}

#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a+b;
}

int main()
{
    int(*ptr)(int,int;
    ptr = add;
    int sum = ptr(5,5);
    cout<<"value of sum is:"<<sum<<endl;
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    cout<<"This output is printed on screen";
    puts("This output is printed using puts");
    int no;
    cout<<"Enter a number";
    cin>>no;
    cout<<"Number entered using cin is"<<no;
    char ch[10];
    puts("Enter a character array");
    gets(ch);
    puts("The character array entered using gets is:");
    puts(ch);

}

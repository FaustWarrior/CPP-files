#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

int main()
{
    fstream st;
    st.open("studytonight.txt",ios::out);
    if(!st)
    {
        cout<<"File creation failed";
    }
    else
    {
        cout<<"New file created"<<endl;
        st<<"Hello Friends";
        cout<<"File Pointer Position is"<<st.tellp()<<endl;
        st.seekp(-1,ios::cur);
        cout<<"As per tellp file pointer position is"<<st.tellp()<<endl;
        st.close();
    }
    st.open("studytonight.txt",ios::in);
    if(!st)
    {
        cout<<"No such file";
    }
    else
    {
        char ch;
        st.seekg(5,ios::beg);
        cout<<"As per tellg file pointer position is"<<st.tellg()<<endl;
        cout<<endl;
        st.seekg(1,ios::cur);
        cout<<"As per tellg file pointer position is"<<st.tellg()<<endl;
        st.close();
    }
    return 0;
}

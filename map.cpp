#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int,int> m; int t1,t2,t3,t4;
    map<int,int>::iterator itr;
    cout<<"Enter the no. of values to be stored\n";
    cin>>t1;
    for(int i=0;i<=t1;i++)
    {
        cin>>t2;
        cin>>t3;
        m.insert(pair<int,int>(t2,t3));
    }
    itr = m.begin();
    while(itr!=m.end())
    {
        cout<<itr->first<<" "<<itr->second<<"\n";
        itr++;
    }

    cout<<"Enter element to be searched\n";
    cin>>t4;
    itr = m.find(t4);
    if(itr != m.end())
    {
        cout<<"Found at"<<itr->second;
    }
    else
    {
      cout<<"not found";
    }


    return 0;
}

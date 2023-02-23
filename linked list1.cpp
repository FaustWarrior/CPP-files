#include <bits/stdc++.h>
using namespace std;

class Node
{
    string data;
    Node *next;
    public: 
    
    Node()
    {
        data = NULL;
        next = NULL;
    } 

    Node(string data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class linlist
{
    Node *head;
    public:
    linlist()
    {
        head = NULL;
    }

    insert(int);
    
    delete(int);
    printlist();
};

void linlist::insert(int data)
{
    Node *New = new Node(data);
    if(head==NULL)
    {
        head = New;
        return;
    }
    Node *temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = New;

}

void linlist::delete(int nodenum)
{
    Node *temp1 = head, *temp2 = NULL;
    int listlen = 0;
    if(head = NULL)
    {
        cout<<"List is empty"<<endl;
    }
    while(temp1 != NULL)
    {
        temp1 = temp1->next;
        listlen++;
    }

    if(listlen<nodenum)
    {
        cout<<"Index out of range"<<endl;
        return;
    }
}

void linlist::printlist()
{

}

int main()
{

    return 0;
}
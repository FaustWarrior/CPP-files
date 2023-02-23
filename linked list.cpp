#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node()
    {
        data = 0;
        next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Linkedlist
{
    Node *head;
    public:
    Linkedlist()
    {
        head = NULL;
    }
    
    void insertNode(int);
    void deleteNode(int);
    void printList();
};

void Linkedlist::deleteNode(int nodeoffset)
{
    Node *temp1 = head, *temp2 = NULL;
    int Listlen = 0;

    if(head == NULL)
    {
        cout<<"List empty"<<endl;
        return;
    }
    while(temp1 != NULL)
    {
        temp1 = temp1->next;
        Listlen++;
    }

    if(Listlen < nodeoffset)
    {
        cout<<"Index out of range"<<endl;
        return;
    }
    temp1 = head;
    if(nodeoffset == 1)
    {
        head = head->next;
        delete temp1;
        return;
    }
    while(nodeoffset--> 1)
    {
        temp2 = temp1;
        temp1 = temp1->next;
    }
    temp2->next = temp1->next;
    delete temp1;
}

void Linkedlist::insertNode(int data)
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

void Linkedlist::printList()
{
    Node *temp =head;
    if(head =NULL)
    {
        cout<<"List empty"<<endl;
        return;
    }
    while(tempnm != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    return 0;
}

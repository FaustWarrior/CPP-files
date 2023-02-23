#include <iostream>
using namespace std;
const int MAX=5;

class PizzaParlour
{
    int front,rear;
    int orders[MAX];
    public:
    PizzaParlour()
    {
        front = -1;
        rear = -1;
    }

    bool isEmpty();
    bool isFull();
    void addOrder(int value);
    int serveOrder();
    void display();

};

bool PizzaParlour::isEmpty()
{
    if(front==-1 && rear==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool PizzaParlour::isFull()
{
    if((rear+1)%MAX==front)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void PizzaParlour::addOrder(int value)
{
    if(isFull())
        return;

    else if(isEmpty())
    {
        front = rear = 0;
    }
    else
    {
        rear = (rear+1)%MAX;
    }

    orders[rear]=value;
}

int PizzaParlour::serveOrder()
{
    int x = 0;

    if(isEmpty())
        return false;
    
    else if(front=rear)
    {
        x = orders[front];
        front = -1;
        rear = -1;

    }
    else
    {
        x = orders[front];
        front = (front+1)%MAX;
    }
    return x;
}

void PizzaParlour::display()
{
    if(isEmpty())
        return;
    else{
        for (int i = front; i!=rear; i = ((i+1)%MAX))
        {
            cout<<orders[i]<<" ";
        }
        
    }
}


int main()
{
    PizzaParlour P;
    int ch,value=0;
    do
    {
        cout<<"1.add";
        cout<<"2.delete";
        cout<<"3.display";
        cout<<"4.exit";
        cin>>ch;
        switch (ch)
        {
        case 1:
            value++;
            P.addOrder(value);
            
            break;
        case 2:
            P.serveOrder();
            break;
        case 3:
            P.display();
            break;
        case 4:
            exit(0);
            break;
        default:
            break;
        }
    } while (ch!=4);
    
    return 0;
}
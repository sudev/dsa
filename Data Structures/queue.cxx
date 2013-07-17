// A standard queue implementation using C++ { OOP learning }
#include <iostream>

using namespace std;

struct node {
    int value;
    struct node * next;
};

class queue{
    private:
       struct node * front, *rear;
    public:
       queue() : front(NULL), rear(NULL)
        { }
       void push();     //only prototype is required inside a class 
       void pop();      // you can also define an entire function within the class
     //  void isempty();
       void printer();
};

//Now epxlain all functions of the class
void queue::pop()
{
    if(front == NULL )
    {
        cout<<"Empty Queue"<<endl;
        return;
    }
    struct node * temp;
    temp = front;
    front = temp->next;
    cout<<temp->value;
    delete temp;
}


void queue::push(){
    int val;
    cout<<"enter a value:"<<endl;
    cin>>val;
    struct node * temp = new (nothrow) node;
    temp->value = val;
    temp->next = NULL;
    if(front == NULL)
    {
        front = temp;
    }
    else
    {
        rear->next = temp;
    }
    rear = temp;
    cout<<"Item Inserted";
}



void queue::printer()
{
    struct node * temp;
    temp = front;
    while(temp != NULL)
    {
        cout<<temp->value<<endl;
        temp = temp->next;
    }
}

int main(){
    int ch = 1;
    queue q;
    while(ch)
    {
        cout<<"\n1.Queue Enqueue\n2.Queue Dequeue\n3.Queue Print\n";
        cin>>ch;
        switch(ch)
        {
            case 1:
                q.push();
                break;
            case 2:
                q.pop();
                break;
            case 3:
                q.printer();
                break;
            default:
                break;
        }
    }

    return 0;
}



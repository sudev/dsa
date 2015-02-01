// A standard queue implementation using C++ { OOP learning }
#include <iostream>
#include <queue>

using namespace std;


int main(){
    int ch = 1;
    queue<int> q;
    while(ch)
    {
        cout<<"\n1.Queue Enqueue\n2.Queue Dequeue\n3.Queue Print\n";
        cin>>ch;
        switch(ch)
        {
            case 1:
                int k;
                cout<<"Enter a element to push";
                cin>>k;
                q.push(k);
                break;
            case 2:
                cout<<"front element dequed"<<q.pop();
                break;
            case 3:
                cout<<q.front();
                break;
            default:
                break;
        }
    }

    return 0;
}



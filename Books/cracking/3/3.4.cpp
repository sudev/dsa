//Trying to Implement classic Tower of Hanoi problem 
//Using a recursive definition in c++ 
//

#include <iostream>

using namespace std;
void towerup(int);

struct stack {
    int value;
    struct stack * next;
};

stack * l = NULL, * r = NULL , * m= NULL;
int tdisks;

int main(){
    cout<<"Enter the number of diks that you want in tower left to be transfered into tower right"<<endl;
    cin>>tdisks;
    towerup(tdisks);
    return 0;
}

void towerup(int t){ 
    l = new stack;
    l->value = t;
    t--;
    stack * temp;
    while(t){
        temp = new stack;
        temp->value = t;
        temp->next = l;
        l = temp;
    }
}






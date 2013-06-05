// Function Overloading 

/**
 * We can use the same fuction name to do different stuff 
 * like to print() print(int ) print (char )
 * all are different when compiled in CPP
 */

// think of something of the sort abs function if 
// thi feature was not there we will have to create 
// many functions like cabs fabs iabs for different data
// types

#include <iostream>

using namespace std;

void printer();
void printer(char );
void printer(int );
int main(){
    printer();
    char r;
    cin>>r; 
    printer(r);
    printer(4);
    return 0;
}

void printer(char t){
    cout <<"char "<<t<<endl;
}

void printer(){
    cout <<endl<<"Hello"<<endl;
}
void printer(int k){
    cout<<"int"<<k<<endl;
}

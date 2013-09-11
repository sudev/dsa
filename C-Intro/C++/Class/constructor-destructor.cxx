#include <iostream>

using namespace std;

class cd{
    public:
    cd(){
        cout<<"Constructor called"<<endl;
    }
    ~cd(){
        cout<<"Destrcutor called "<<endl;
    }
};

int main(){
    cout<<"cd s"<<endl;
    cd s;
}



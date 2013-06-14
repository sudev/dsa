#include <stdio.h>
#include <iostream>
using namespace std;


class counter
{
    private:
        unsigned int count;
    public:
        counter() : count(0)   //This is how we create a contstruct function ( which 
                               //has no return type and has same name of that of the 
                               //class

    {
        //function body
        /**
         * We could have intialised the variable count = 0 ; here but its not that 
         * efficient to doing something of the sort 
         * counter() : var1(0) var2(any value to which it has to be intialised)
         * Author says the reason is complex to be explained in the book 
         * so chuck it 
         * **/
    }
    void inc_counter(){
        count++;
    }
    int get_count(){
        return count;
    }
};


int main(){
    
    counter c1,c2;
    cout<<c1.get_count();
    return 0;
}


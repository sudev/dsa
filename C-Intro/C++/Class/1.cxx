#include <iostream>
using namespace std;
class Crect {
    int x,y;
    /* This declaration will be under private domain, o/w we will have to specify it particularly*/
    public:
    void set_values(int,int);
    int area() {return (x*y);}
};
/**
 * Operator of scope :: 
 * used to define class outside the definition of class definition 
 * */


void Crect::set_values(int a,int b){
    x = a;
    y = b;
}

int main(){
    Crect  r; // Crect is a class and now we have created a object r of class crect 
    r.set_values(2,3);
    cout << "area: " << r.area();
    return 0;
}

/**
 * That is the basic concept of object-oriented programming: Data and functions are both members of the object. We no longer use sets of global variables that we pass from one function to another as parameters, but instead we handle objects that have their own data and functions embedded as members. Notice that we have not had to give any parameters in any of the calls to rect.area or rectb.area. Those member functions directly used the data members of their respective objects rect and
 * rectb.
 */


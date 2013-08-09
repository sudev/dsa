#include <iostream>
using namespace std;
class Crect {
    int x,y;
    /* This declaration will be under private domain, o/w we will have to specify it particularly*/
    public:
    void set_values(int,int);
    int area() {return (x*y);}
};
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

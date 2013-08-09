// example on constructors and destructors
#include <iostream>
using namespace std;

class CRectangle {
    int *width, *height;
  public:
    CRectangle (int,int);
    ~CRectangle ();
    int area () {return (*width * *height);}
};

//A constructor which will create two variables and assign them values 
CRectangle::CRectangle (int a, int b) {
  width = new int;
  height = new int;
  //declare and initialise the variables 
  *width = a;
  *height = b;
}
//this destructor will destroy all the unwanted variables local to the 
//class and is no more required 

CRectangle::~CRectangle () {
  delete width;
  delete height;
  //delete the unwanted variables to save space 
}

int main () {
  CRectangle rect (3,4), rectb (5,6);
  cout << "rect area: " << rect.area() << endl;
  cout << "rectb area: " << rectb.area() << endl;
  return 0;
}

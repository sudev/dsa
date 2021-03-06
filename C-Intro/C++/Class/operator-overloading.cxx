// vectors: overloading operators example
#include <iostream>

using namespace std;

class CVector {
  public:
    int x,y;
    CVector () {};
    CVector (int,int);
  //Here we can overload the + or many other operators to the 
  //syntax is little too strang though 
    CVector operator + (CVector);
};

CVector::CVector (int a, int b) {
  x = a;
  y = b;
}

//the formal function definition for overloading 
//+ operator into the class so that 
// we can uise the operator with two classes 

CVector CVector::operator+ (CVector param) {
  CVector temp;
  temp.x = x + param.x;
  temp.y = y + param.y;
  return (temp);
}

int main () {
  CVector a (3,1);
  CVector b (1,2);
  CVector c;
  c = a + b;
  cout << c.x << "," << c.y;
  return 0;
}

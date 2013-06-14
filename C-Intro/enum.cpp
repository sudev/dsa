//A program to demonstrate the use of enum type
#include <iostream>
enum days  { mon,tue,wed,thur,fri,sat,sun};
using namespace std;

int main(){
  days m , t;
  m = mon;
  t = thur; 
  cout <<"difference between mon and thur "<<(m-t)<<endl;
  if( m > t){
    cout<<"monday greater than thursday"<<endl;
}
  else
    {
   cout<<"thursday comes before monday"<<endl;
    }
  return 0;
} 

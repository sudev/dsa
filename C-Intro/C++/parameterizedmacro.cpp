/**
 * This is to illustrate a parameterized macro facility 
 * provided in C++
 */

#include <iostream>
#define sqr(x) ((x) * (x)) //Now every call to sqr as function will return its square 
// The # Operator 
#define str(data) #data //Every call to str will turn the data into "data" ( to string )

using namespace std;

int main()
{
    cout<<sqr(12);
    int data = 15;
    //cout<<(typeof(data));
    //cout<<typeof(str(data)).name();
    return 0;
}

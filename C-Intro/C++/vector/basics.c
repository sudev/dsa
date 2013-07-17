#include <iostream>
#include <vector>

using namespace std;

int main(){
    // Initailising a vector 
    //  syntax          vector<data-type> var-name
    vector<int> count; // Here the creation is there but this is not useful since the size of the variable is zero 
    vector<int> co (4, 0); // here a vector is created with size 4 and each of them initialised to zero 
    //The above one is a constructor function which creates and initialises the function 
    
    //You can assign values just like do in an array 

    co[0] = 120;
    co[1] = 12;
    co[3] = 34;




#include <iostream>
using namespace std;

bool issingle(int a){
return (a > 0 && a < 10);
}


// Bool can be assigned a conditional operation 
int main(){
    int x;
    cin>>x;
    bool s = ( x > 1);
    cout<<s<<endl<<"Enter a Number to check if its single digit";
    cin>>x;
    cout << issingle(x)<<endl;
    return 0;
}


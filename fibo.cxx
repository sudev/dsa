#include <iostream>

using namespace std;
int fibo(int );
int main(int argc, char *argv[] ){
    if( argc < 3 )
    {
        cout<<"Format ./a.out <fibo-no>"<<endl;
        return 1;
    }
    fibo(atoi(argc[1]));
    return 0;
}

int fib(int a){
    if( a == 0)
        return 0;
    if( a == 1)
        return 1;
    return fibo(a-1) + fibo(a-2);
}


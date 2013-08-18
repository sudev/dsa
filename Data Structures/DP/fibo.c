//Memoization 
// writtin down the details of subproblems in a dictionary 
// then using the same value repeatedly again so 
// that we dont have to solve them again and again 
// thus saving time to solve the already solved sub problems 

/**
 * Memoization 
 *  memorize and reuse solutions to sub problems 
 *  that help tp solve the problem 
 *
 *  */



//Program Fibonacci 

#include <stdio.h>

//Memo 
int memo[100] = {0};
int main(){
    int n;
    scanf("%d",&n);
    printf("\n%d\n",fibo(n));
    return 0;
}

int fibo(int k){
    //checking the memo
    if(memo[k] != 0)
        return memo[k];
    //f(1) and f(2) conditions 
     if(k < 3)
         return 1;
     //adding to memo for further use
     memo[k] = (fibo(k-1) + fibo(k-2));
     return memo[k];
}

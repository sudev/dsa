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

//Memo required for the recursive algo to work  
int memo[100] = {0};

int fibobup(int);
int fibo(int);

int main(){
    int n;
    scanf("%d",&n);
    printf("\n%d\n",fibo(n));

    printf("\n%d\n",fibobup(n));
    
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

/**
 * Bottom Up Approach 
 *
 * Transforming the the recursive definition into a 
 * bottom up approach so that we can save space. 
 *  
 *  Exactly same computation as that of the recursive method 
 *
 *  Basically a topological sort of sub problem dependency DAG
 *
 */
//saves results of each sub problem 

int fibobup(int k){

    int bup[100] = {0};
    int i,ans;
    for(i=1;i<(k+1);i++)
    {
    if ( i < 3)
        ans = 1;
    else
    {
        ans = bup[i-1] + bup[i-2];
    }
    bup[i] = ans;
    }
    return bup[k];
}



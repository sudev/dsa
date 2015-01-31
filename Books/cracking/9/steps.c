//Using recursion count the number of ways in which a child can climb the stpe taking either 
//1, 2 or 3 steps at a time. Given "n" as total no of steps find the total number of ways 

#include <stdio.h>

int ways(int k);

int main(){
    printf("Enter the number of ways ");
    int n;
    scanf("%d",&n);
    printf("%d total no of ways \n",ways(n));
    return 0;
}

int ways(int k){
    if (k == 0 )
    {
        return 1;
    }
    if (k < 0 )
    {
        return 0;
    }
    int count = ways(k-1) + ways(k-2) + ways(k-3);
    return count;
}


#include <stdio.h>
int fibo(int);
int fiba[100]={0};

int main(){
  printf("Enter a Number for fibonaci \n");
  int n;
  scanf("%d",&n);
  printf("\n%d\n",fibo(n));
}

int fibo(int n){
  if(n == 0)
    return 1;
  if (n == 1)
    return 1;
  if (fiba[n] != 0)
    return fiba[n];
  fiba[n] = (fibo(n-1) + fibo(n-2) );
  return fiba[n];
}

#include <stdio.h>
#include <time.h>
clock_t b,e;
double time_spent;

int fibo(int);
int fiba[100]={0};

int main(){
  printf("Enter a Number for fibonaci \n");
  int n;
  scanf("%d",&n);
  b = clock();
  printf("\n%d\n",fibo(n));
  e = clock();
  time_spent = (((double)(e - b)) / CLOCKS_PER_SEC);
  //clock per second is a constant defined in time.h
  printf("Time spent  :\t %f\n",time_spent);
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

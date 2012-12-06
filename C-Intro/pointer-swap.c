#include <stdio.h>
//w/o function prototyping things wont work in c as in C++
void dwape(int *i,int *j);
void main()
{
int a,b;
scanf("%d%d",&a,&b);
printf("a= %d, b= %d\n",a,b);
dwape(&a,&b);
printf("after swap, a = %d, b = %d \n",a,b);
}
//swap function 
void dwape(int *i,int *j)
{
int temp;
temp = *i;
*i = *j;
*j = temp;
}


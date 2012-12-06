#include <stdio.h>
int fact(int);
void main()
{
printf("Numer ?");
int a;
scanf("%d",&a);
printf("\nFactorial of number is %d\n",fact(a));
}
int fact(int i)
{
int m =1;
printf("\n In fact i=%d m=%d", i,m);
if (i > 1)
m = i*fact(i-1);
printf("\nout Fact i=%d m=%d",i,m);
return(m);
}


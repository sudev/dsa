#include <stdio.h>

void main()
{
int x,y;
scanf("%d%d",&x,&y);
printf("x = %d, y = %d",x,y); 
x = x ^ y;
y = x ^ y;
x = x ^ y;
printf("\nx = %d ,y = %d\n",x,y);
}

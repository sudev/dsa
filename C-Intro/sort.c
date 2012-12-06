#include <stdio.h>
main()
{
int data[111], i, j, n, temp;
scanf("%d",&n);
for (i=0;i<n;i++)
scanf("%d",&data[i]);
for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++)
if(data[i]>data[j]) //check for each and traverse using j's value 
{
temp=data[i];
data[i]=data[j];
data[j]=temp;
}
for(i=0;i<n;i++)
printf("%d\n",data[i]);
}

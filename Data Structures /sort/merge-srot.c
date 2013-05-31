#include <stdio.h>
int mergesort(int a[],int start,int end);
int merge(int a[],int start,int middle,int end);
int a[100]= {999999};
void main(int argc, char const *argv[])
{
	int n=0,i;
	printf("Enter the number of elements that you want to sort::\n");
	scanf("%d",&n);
	for(i =0; i < n; ++i)
	{
		printf("\n");
		scanf("%d",&a[i]);
	}
	printf("\n------wait let me sort it out------\n");
	mergesort(a,0,n-1);
	for (i = 0; i < n; i=i+1)
	{	
	printf("%d\n",a[i]);
	}
}

int mergesort(int a[],int start,int end)
{
if(end > start)
	{
	int middle = (end + start) / 2 ;
	mergesort(a,start,middle);
	mergesort(a,(middle + 1),end);
	merge(a,start,middle,end);
	}
return 0;
}

int merge(int a[],int start,int middle,int end){
	int t,right[(middle - start)],left[(end - middle)],i,j,k;
	k = start;
	for(i = 0; i <= middle; i++){
		left[i] = a[start + i];
	}
	for(i = 0; i <= end; i++){
		right[i] = a[(middle + 1 + i)];
	}
	i = 0;
	j = 0;
	for(k = start; k <= end; k++)
	{
		if(left[i] > right[j])
		{
			a[k] = right[j];
			++j;
		}
		else
		{
			a[k] = left[i];
			++i;
		}
	}
	return ;
}
/****

Divide and conquer.

Divide the problem into a number of subproblems 

Conquer the subproblems by solving them recursively. If the subproblems
are small enough solve them in a straight forward way

Combine the solutions to the subproblems into the solutions for the 
original problem 

***/
#include <stdio.h>
int a[100];
int mergesort(int a,int p,int r); // array, start, end
int merge(int a,int p,int q,int r); // array start1 start2 end 
int mergesort(a,p,r)
{
	int q;
	if (p > r )
	{
		q = (p + r) / 2;
		mergesort(a,p,q);
		mergesort(a,q+1,r);
		merge(a,p,q,r);
		return;
	}
}
int merge(a,p,q,r)
{
	int n1,n2;
	n1 = (q - p) + 1;
	n2 = r - q;
	int a1[n1];
	a1[3] = 5;
	
	printf("%d",n1); 	 
}
int main()
{
	merge(10,1,5,10);
}

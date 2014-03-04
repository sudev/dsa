//#Finding out the maximum difference of elements in an given array 
//#such  that the bigger one appers to right of the smaller one(number).

//#approach one simple one 
#include <stdio.h>

int MAxdSimple(int num[], int k);

int main()
{

int num[] = { 2,42,5,3,56,78};
int i;

int k = (sizeof(num) / sizeof(num[0])); 
MaxdSimple(num,k);
return 0;
}


int MaxdSimple(int num[], int k) 
{ 
	int temp,i,j,maxd=0,big,small;
	for(i=0; i < k; i++)
	{ 
		for(j=(i+1); j < k ; j++)
		{
		      temp = num[j] - num[i] ; 	
	      		if( maxd  < temp ) 
			{
			   big = num[j];
			   small = num[i];
			}
		}
	}			
			
printf("MAX = %d ,Min = %d",big,small);
}


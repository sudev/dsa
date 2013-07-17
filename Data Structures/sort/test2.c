#include <stdio.h>

int main() {
	merger();
	return 0;
}

int merger()
{
	int a[10] = {2,3,4,5,9,1,6,7,8,10};
	int i,r[5],l[5],j;
	for ( i = 0; i < 5; ++i)
	{
		r[i] = a[i];
		l[i] = a[i+5];
 		printf("r[%d] = %d\t l[%d] = %d \n",i,r[i],i,l[i]);
 	}
 	i =0;
 	j = 0;
 	int k =0;
 	for (k = 0; k< 10; ++k)
 	{
 		if ( r[i] > l[j] )
		{
			printf("%d", l[j]);
			++j;
		}
		else
		{
			printf("%d",r[i]);
			++i;
		}
	}


}
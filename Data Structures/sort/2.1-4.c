#include <stdio.h> 
int main(int argc, char const *argv[])
{
	int a[100] = {0 }, b[100] = {0}, c[100] = {0};
	printf("Enter the number of bits you want to deal with \n");
	int n,i,k;
	scanf("%d",&n);
	printf("Enter all the bits of first binary\n");
	for (i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter all the bits of second binary\n");
	for ( i = 0; i < n; ++i)
	{
		scanf("%d",&b[i]);
	}
	for (i = 0; i < n; ++i)
	{
		k = a[i] + b[i] + c[i];
		switch(k)
		{
			case 1:
				c[i] = 1;
				break;
			case 2:
				c[i] = 0;
				c[i+1] = 1;
				break;
			case 3:
				c[i] = 1;
				c[i+1] = 1;
				break;
			default:
			printf("Something is wrong ");
			return 0;

		}
	}
	for (i = (n); i >= 0; --i)
	{
		printf("%d",c[i]);
	}

	return 0;
}
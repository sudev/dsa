#include <stdio.h>

int main(){
	int a[3] = {0,1,2};
	add(a);
}
int add(int a[]){
	int i,sum;
	for( i = 0; i < 3; ++i)
	{
		sum +=a[i];
	}
	printf("%d\n",sum );
}
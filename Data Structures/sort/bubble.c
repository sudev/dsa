#include <stdio.h>
//array to be sorted
int a[8] = { 1, 123,14 ,112223, 1223,451,34,121};

void swap(int,int);
void bubble(int);
void printer(int);

int main(){
  bubble(8);
  printer(8);
  return 0;
}
//bubble sort 
void bubble(int size)
{
  int k,p; 
  for(k = (size -1);k>=0;k--)
    {
      for(p = 0; p< k; p++)
	{
	  if(a[p] > a[p+1])
	    swap(p,p+1);
	}
    }
}

void swap(int p, int k){
  int temp;
  temp = a[p];
  a[p] = a[k];
  a[k]= temp;
}

void printer(int size){
  int i;
  for(i =0; i < size; i++)
    printf("%d\t",a[i]);
  printf("\n");
}

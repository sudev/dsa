#include <stdio.h>

int main(){
  int a[100] = { [0 ... 15] = 0, [16 ... 50] = 25, [51 ... 99 ] =0};
  int *result;
  //allocating the memory for array with the size equaling to soze of the array 
  result = (int *)malloc(51*sizeof(int));
  int i,j=0;
  for(i = 0; i <100; i++)
    {
      if(a[i]!=0 )
      {
	    result[++j] = a[i];
       // printf("%d\t",a[i]);
      } 
    }
  for(i = j; i>=0; --i)
    {
      a[i] = result[i];
      //printf("%d",a[i]);
    }
  printf("Total number of non zeros : %d\n",j);
  return 0;
}

  


#include <stdio.h>
void printer();
int arr[];
/**
Works well for the arrays which are already sorted and does 
sorting linearly 
**/
int main()
{
    //Insertion sort using array 
    //directly converted CLRS psuddo code 
    int key,n;
    printf("Enter the required number of numbers\n");
    scanf("%d",&n);
    
    int i;
    for(i=0; i<n;i++)
    {
        printf("Enter %d number\n" ,i);
        scanf("%d",&arr[i]);
    }
    
    for(i=1; i<n;i++)
    {
        key=arr[i];
        int j;
        j = i-1;

        while(j>-1 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
	printer(n);
    }
    printf("Sorted Array : \n");
    printer(n);
}

void printer(int n){
  int i;
  for(i=0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }
  printf("\n");
}


            



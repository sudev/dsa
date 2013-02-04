#include <stdio.h>

int main()
{
    //Insertion sort using array 

    int array[122], key,n;
    printf("Enter the required number of numbers\n");
    scanf("%d",&n);
    
    int i;
    for(i=0; i<n;i++)
    {
        printf("Enter %d number\n" ,i);
        scanf("%d",&array[i]);
    }
    
    for(i=1; i<n;i++)
    {
        key=array[i];
        int j;
        j = i-1;

        while(j>-1 && array[j]>key)
        {
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=key;
    }
    for(i=0; i<n; i++)
    {
        printf("%d\n",array[i]);
    }
}



            


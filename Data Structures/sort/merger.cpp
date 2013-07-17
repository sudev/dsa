/*
using the C++ forum example 

*/

#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;
int max(int,int);
void merge_helper(int *,int,int,int *);
int mergesort(int *input, int size);
int main(int argc, char const *argv[])
{
	int input[5] = {1,2,5,3,10};
	mergesort(input,5);
	for(int i=0; i < 5;i++)
    {
        cout<<input[i]<<"\n";
    }
    return 0;
}

int max(int x, int y)
{
    if(x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

void merge_helper(int *input, int left, int right, int *scratch)
{
    if(right == left + 1)
    {
        return;
    }
    else
    {
        int i = 0;
        int length = right - left;
        int midpoint_distance = length/2;
        printf("%d",midpoint_distance);
        int l = left, r = left + midpoint_distance;

        merge_helper(input, left, left + midpoint_distance, scratch);
        merge_helper(input, left + midpoint_distance, right, scratch);

        for(i = 0; i < length; i++)
        {
            if(l < left + midpoint_distance && 
                    (r == right || max(input[l], input[r]) == input[l]))
            {
                scratch[i] = input[l];
                l++;
            }
            else
            {
                scratch[i] = input[r];
                r++;
            }
        }
        for(i = left; i < right; i++)
        {
            input[i] = scratch[i - left];
        }
    }
}


int mergesort(int *input, int size)
{
    int *scratch = (int *)malloc(size * sizeof(int));
    if(scratch != NULL)
    {
        merge_helper(input, 0, size, scratch);
        free(scratch);
        return 1;
    }
    else
    {
        return 0;
    }
}

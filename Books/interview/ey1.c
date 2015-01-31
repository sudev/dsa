//Write a program to make a union list of two sorted lists
//Lets assume that they are given as arrays 

#include <stdio.h>

int main(){

int a[7] = { 1, 4, 5, 6, 7, 34, 54}, b[10] = {1,2,3,4,5,6,7,8,9,10};

merger(a,b,7,10);
return 0;

}

int merger(int a[],int b[],int size_a, int size_b){
    int ia=0,ib=0,i=0;
    int result[(size_a + size_b)];
    while( (i != (size_a + size_b) ) && (ia != size_a) && (size_b != ib) )
    if( a[ia] == b[ib])
    {
        result[i++]  = a[ia++];
        ib++;

    }
    else if(a[ia] > b[ib])
    {
        result[i++] = b[ib++];
    }
    else
    {
        result[i++] = a[ia++];
    }
    while(ia != size_a)
    {
        result[i++] = a[ia++];
    }
    while( ib != size_b )
    {
        result[i++] = b[ib++];
    }
    ia =0;
    while(ia < i){
        printf("\t%d\n",result[ia++]);
    }
}


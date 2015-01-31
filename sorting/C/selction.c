#include <stdio.h>
int i,j, imin;
int main(){
    for(j =0; j < n-1 ; j++){

        imin = j;
        for( i = j + 1; i < n; i++)
        {
            if(a[i] < a[imin])
            {
                imin = i;
            }
        }
    
    if(imin != j )
    {
        temp = a[j];
        a[j] = a[imin];
        a[imin] = temp;
    }
return 0;
}



#include <stdio.h>
int a[100] ={0}, b[100] = {0},n;
int smallest();
void selection();
int main(){
    printf("Enter the Number of numbers");
    int i;
    scanf("%d",&n);
    printf("Enter the numbers and enter");
    for(i =0; i < n; ++i)
        scanf("%d", &a[i]);
    selection();
    return 0;
}

void selection(){
    int i; 
    printf("Sorted \n");
    for(i =0; i < n; ++i)
    {
        b[i] = smallest();
        printf("%d\t", b[i]);
    }
}
int smallest(){
    int temp = 0,i,k;
    for(i= 0;i < n; ++i)
    {
        if (a[temp] >= a[i])
        {
            temp = i;
        }
    }
k = a[temp];
a[temp] = 9999;
return k;
}





    


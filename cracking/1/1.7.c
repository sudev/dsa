#include <stdio.h>
#include <stdbool.h>
int main(){
    int row,col,i,j;
    scanf("%d%d",&row,&col);
    int matrix[100][100] = {0,0};
  //  int matrix[row-1][col-1];
    int ro[100]={0},co[100]={0};
    
    for(i = 0; i < row ;i++)
    {
        for(j=0; j < col; j++)
        {
            scanf("%d",&matrix[i][j]);
            if(matrix[i][j] == 0)
            {
                ro[i] = 1;
                co[j] = 1;
            }
        }
    }
    i = row - 1;
    for( i= row-1; i  >= 0; --i)
    {
        if(ro[i])
        {
            for(j = 0; j < col ; ++j)
            {
            matrix[i][j]  = 0;
            printf("Col \t %d row \t %d || \t",j,i);
            }   
        }
    }
    for(j = col -1; j >= 0; --j)
    {
        if(co[j])
        {
            for(i = 0; i < row; ++i)
                matrix[i][j] = 0;
            printf("Col \t %d row \t %d || \t",j,i);
        }
    }
    printf("\n");
    for(i = 0; i < row ;i++)
    {   
        for(j=0; j < col; j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

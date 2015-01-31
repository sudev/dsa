#include <stdio.h>
#include <string.h>

int main(){
    char wd[100];
    int i,len,k;
    fgets( wd, 256,stdin);

    for( i =0; i < 256; i++)
    {
        if(wd[i] == '\n')
        {
            wd[i] = '\0';
        }
    }
   len = strlen(wd);
   for(i = 0; i < 256; ++i)
    {
        if(wd[i] == ' ')
        {
        wd[i] = '%';
        k = len;
        while(k > i)
        {
            wd[k+2]  = wd[k];
            --k;
        }
        wd[i+1] = '2';
        wd[i+2] = '0';
        len = len +2;
        }
    }
   printf("%s",wd);
   return 0;
}

